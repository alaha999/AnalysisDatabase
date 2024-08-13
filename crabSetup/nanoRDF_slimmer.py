import ROOT
import sys
import PSet

ROOT.gROOT.SetBatch(True)


def process_input_files(psetfiles,redirector='root://cms-xrd-global.cern.ch//'):
    
    inputfiles = ROOT.std.vector("string")()

    for files in psetfiles:
        file_lfn = redirector+files
        inputfiles.push_back(str(file_lfn))
        print(f"processing >>>{file_lfn}")
        
    return inputfiles


def open_df(files):
    
    df = ROOT.RDataFrame("Events",files)
    
    return df

def keepBranch(dasNo=100,year="2018"):
    
    branchName=[]
    
    ObjectBranch = {
        "Muon":     ['pt','eta','phi','charge','sip3d','dxy','dz','jetIdx','pfRelIso04_all',"mediumId","pdgId","jetRelIso"],
        "Electron": ['pt','eta','phi','charge','sip3d','pfRelIso03_all','jetIdx',"cutBased","vidNestedWPBitmap","pdgId","dEscaleDown","dEscaleUp","deltaEtaSC"],
        "Tau":      ["pt","eta","phi","charge","decayMode","idDeepTau2017v2p1VSe","idDeepTau2017v2p1VSmu","idDeepTau2017v2p1VSjet","dxy","dz","jetIdx"],
        "Jet":      ["pt","eta","phi","jetId","btagDeepB","btagDeepFlavB","btagDeepFlavCvB","btagDeepFlavCvL","btagDeepFlavQG","puId","puIdDisc","qgl"],
        "MET":      ["phi","pt","significance"],
        "PuppiMET": ["phi","pt","phiJERDown","phiJERUp","phiJESUp","phiJESDown","ptJERUp","ptJERDown","ptJESUp","ptJESDown"],
        "PV":       ["npvs","npvsGood"]
    }

    mcObjectBranch={
        "GenJet":   ["pt","eta","mass","phi","partonFlavour","hadronFlavour"],
        "GenPart":  ["pt","eta","mass","phi","genPartIdxMother","pdgId","status","statusFlags"],
        "GenVisTau":["pt","eta","mass","phi","charge","status","genPartIdxMother"],
        "TrigObj"  :["pt","eta","phi","id","filterBits"]
    }
            
    for objName,varlist in ObjectBranch.items():
        for variable in varlist:            
            branchName.append(objName+'_'+variable)
            
    
    commonBranch= ["run","luminosityBlock","event"]
    
    triggerPathBranch=["HLT_IsoMu24","HLT_IsoMu27","HLT_Ele27_WPTight_Gsf"]
    if(year=='2018'):triggerPathBranch.append("HLT_Ele32_WPTight_Gsf_L1DoubleEG")
    if(year=='2016'):triggerPathBranch.append("HLT_IsoTkMu24")
    if(year=='2018' or year=='2017'):triggerPathBranch.append("HLT_Ele32_WPTight_Gsf")
    
    wtBranch=["Generator_weight","Pileup_nTrueInt","Pileup_nPU","L1PreFiringWeight_Nom","L1PreFiringWeight_Up","L1PreFiringWeight_Dn"]
    

    branchName=commonBranch+triggerPathBranch+wtBranch+branchName
    
    ##Just MC branches    
    if(dasNo<1000):
        print("MC branches...")
        #-----------------------
        branchName.append("Muon_genPartIdx")
        branchName.append("Muon_genPartFlav")
        branchName.append("Electron_genPartIdx")
        branchName.append("Electron_genPartFlav")
        branchName.append("Tau_genPartIdx")
        branchName.append("Tau_genPartFlav")
        branchName.append("Jet_genJetIdx")
        branchName.append("Jet_hadronFlavour")
        branchName.append("Jet_partonFlavour")
        branchName.append("fixedGridRhoFastjetAll")
        
        for objName,varlist in mcObjectBranch.items():
            for variable in varlist:            
                branchName.append(objName+'_'+variable)

    ##return branches
    return branchName
            

def processSkimTree(year,dasNo,event_selection):
    
    ### inputfiles
    inputfiles = process_input_files(PSet.process.source.fileNames)

    ### create a dataframe
    df = open_df(inputfiles)
    
    ### define any custom column
    
    
    
    ### apply event selection filter
    df = df.Filter(event_selection)
    
    
    ### output Skim Tree
    outputfilename= 'ntuple_skim.root'
    print ("OUTPUT FILENAME >>>",outputfilename)
    
    branchesToSave = keepBranch(dasNo,year)
    for i,branch in enumerate(branchesToSave):
        print(f"{i+1}.{branch}")
        
    df.Snapshot("Events",outputfilename,branchesToSave)


##----------------    

if __name__=="__main__":
    
    dasNo = 100
    year  = "2018"
    event_selection="(nMuon+nElectron)>0"
    processSkimTree(year,dasNo,event_selection)
    
