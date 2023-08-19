
// Applying scale factor for ele,mu and tau for 2016,2017,2018 by calling the individual SF function defined later


float VLLAna::LeptonID_SF(int id, float pt, float eta)
{
  float SF = 1.;
  
  //TAU
  if(abs(id)==15){
    float TauPt =pt;
    float TauEta=eta;
    
    if(_year==2016 && _era="preVFP")
      SF = getSFTausUL16preVFP_AntiJet(TauPt,TauEta);
    
    if(_year==2016 && _era="postVFP")
      SF = getSFTausUL16postVFP_AntiJet(TauPt,TauEta);

    if(_year==2017)
      SF = getSFTausUL17_AntiJet(TauPt,TauEta);

    if(_year==2018)
      SF = getSFTausUL18_AntiJet(TauPt,TauEta);
  }

  //MUON( ID * ISO)
  if(abs(id)==13){
    if(_year==2016 && _era="preVFP")
      SF =  getSFMuonUL16preVFP_ID(pt,eta)*getSFMuonUL16preVFP_ISO(pt,eta);
    if(_year==2016 && _era="postVFP")
      SF =  getSFMuonUL16postVFP_ID(pt,eta)*getSFMuonUL16postVFP_ISO(pt,eta);	
    if(_year==2017)
      SF =  getSFMuonUL17_ID(pt,eta)*getSFMuonUL17_ISO(pt,eta);
    if(_year==2018)
      SF =  getSFMuonUL18_ID(pt,eta)*getSFMuonUL18_ISO(pt,eta);	
  }
  //Electron( IDIso * Reco)
  if(abs(id)==11){
    if(_year==2016 && _era="preVFP")
      SF =  getSFElectronUL16preVFP_IDIso(pt,eta)*getSFElectronUL16preVFP_Reco(pt,eta);
    if(_year==2016 && _era="postVFP")
      SF =  getSFElectronUL16postVFP_IDIso(pt,eta)*getSFElectronUL16preVFP_Reco(pt,eta);
    if(_year==2017)
      SF =  getSFElectronUL17_IDIso(pt,eta)*getSFElectronUL17_Reco(pt,eta);
    if(_year==2018)
      SF =  getSFElectronUL18_IDIso(pt,eta)*getSFMuonUL18_Reco(pt,eta);
  }
  
  return SF;
}


//TriggerSF
//Functions are in TriggerEfficiencyScaleFactor.h header file

float VLLAna::SingleLepTrigger_SF(int id, float pt, float eta)
{
  float SF = 1.0;
  if(abs(id)==13){
    if(_year==2016)
      SF = TriggEff2016Data_IsoMu24(pt,eta)/TriggEff2016MC_IsoMu24(pt,eta);
    if(_year==2017)
      SF = TriggEff2017Data_IsoMu27(pt,eta)/TriggEff2017MC_IsoMu27(pt,eta);
    if(_year==2018)
      SF = TriggEff2018Data_IsoMu24(pt,eta)/TriggEff2018MC_IsoMu24(pt,eta);
  }
  
  //if(abs(id)==11){
  // if(_year==2016)
  //   eff = TriggEff2016Data_Ele27WPTightGsf(pt,eta);
  // if(_year==2017)
  //   eff = TriggEff2017Data_Ele32WPTightGsf(pt,eta);
  // if(_year==2018)
  //   eff = TriggEff2018Data_Ele32WPTightGsf(pt,eta);
  //}
  
  return SF;
}
float VLLAna::SingleLepTrigger_eff(int id, float pt, float eta)
{
  float eff = 0.0;
  if(abs(id)==13){
    if(_year==2016)
      eff= TriggEff2016Data_IsoMu24(pt,eta);
    if(_year==2017)
      eff= TriggEff2017Data_IsoMu27(pt,eta);
    if(_year==2018)
      eff= TriggEff2018Data_IsoMu24(pt,eta);
  }
  return eff;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




