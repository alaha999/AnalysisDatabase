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

def processSkimTree(event_selection):
    
    ### inputfiles
    inputfiles = process_input_files(PSet.process.source.fileNames)

    ### create a dataframe
    df = open_df(inputfiles)
    nevt=df.Count().GetValue()
    df = df.Define("nevtgen",f"{nevt}")
    ### define any custom column
    
    
    
    ### apply event selection filter
    df = df.Filter(event_selection)

    
    ### output Skim Tree
    outputfilename= 'ntuple_skim.root'
    print ("OUTPUT FILENAME >>>",outputfilename)
    
    ##branches
    branchesToSave = df.GetColumnNames()
    
    df.Snapshot("Events",outputfilename,branchesToSave)


##----------------    

if __name__=="__main__":
    
    event_selection="(nMuon+nElectron)>2"
    processSkimTree(event_selection)
