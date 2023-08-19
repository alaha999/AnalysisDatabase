//---------------------------------------------------------------------------------//
//  This is scale factors for DeepCSV Medium WP & DeepJET Medium WP
//  TWIKI:https://btv-wiki.docs.cern.ch/ScaleFactors/
//  SF are derived as a function of Jet pt, eta and flavor
//  PT range: 20-30,30-50,50-70,70-100,100-140,140-200,200-300,300-600,600-1000
//  Eta range: 0-0.8, 0.8-1.6, 1.6-2.5 ( same sf for negative eta)
//  Flavor: b=5, c=4, light = 0
//
//  getScaleFactors_bTagJets_MedWP_UL18  : b-tag efficiency scalefactors
//  getScaleFactors_cTagJets_Mis_UL18    : c-tag misid efficiency scalefactors
//  getScaleFactors_LightTagJets_Mis_UL18: light jet mis id efficiency scalefactors
//----------------------------------------------------------------------------------//

// DEEPJET MEDIUM WP

double VLLAna::getScaleFactors_bTagJets_MedWP_UL18(float eta, float pt){
  double scale_factor = 1.0;
  
  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.9385400437200391;
    if( 30<pt && pt<50)
      scale_factor =  0.948300458728094;
    if( 50<pt && pt<70)
      scale_factor =  0.9569614973550692;
    if( 70<pt && pt<100)
      scale_factor =  0.96395228595033;
    if( 100<pt && pt<140)
      scale_factor =  0.969881763737521;
    if( 140<pt && pt<200)
      scale_factor =  0.9729258947186322;
    if( 200<pt && pt<300)
      scale_factor =  0.9766315701807073;
    if( 300<pt && pt<600)
      scale_factor =  0.9748256225693339;
    if( 600<pt && pt<1000)
      scale_factor =  0.9603165903672826;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.9385400437200391;
    if( 30<pt && pt<50)
      scale_factor =  0.948300458728094;
    if( 50<pt && pt<70)
      scale_factor =  0.9569614973550692;
    if( 70<pt && pt<100)
      scale_factor =  0.96395228595033;
    if( 100<pt && pt<140)
      scale_factor =  0.969881763737521;
    if( 140<pt && pt<200)
      scale_factor =  0.9729258947186322;
    if( 200<pt && pt<300)
      scale_factor =  0.9766315701807073;
    if( 300<pt && pt<600)
      scale_factor =  0.9748256225693339;
    if( 600<pt && pt<1000)
      scale_factor =  0.9603165903672826;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.9385400437200391;
    if( 30<pt && pt<50)
      scale_factor =  0.948300458728094;
    if( 50<pt && pt<70)
      scale_factor =  0.9569614973550692;
    if( 70<pt && pt<100)
      scale_factor =  0.96395228595033;
    if( 100<pt && pt<140)
      scale_factor =  0.969881763737521;
    if( 140<pt && pt<200)
      scale_factor =  0.9729258947186322;
    if( 200<pt && pt<300)
      scale_factor =  0.9766315701807073;
    if( 300<pt && pt<600)
      scale_factor =  0.9748256225693339;
    if( 600<pt && pt<1000)
      scale_factor =  0.9603165903672826;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_cTagJets_Mis_UL18(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.9385400437200391;
    if( 30<pt && pt<50)
      scale_factor =  0.948300458728094;
    if( 50<pt && pt<70)
      scale_factor =  0.9569614973550692;
    if( 70<pt && pt<100)
      scale_factor =  0.96395228595033;
    if( 100<pt && pt<140)
      scale_factor =  0.969881763737521;
    if( 140<pt && pt<200)
      scale_factor =  0.9729258947186322;
    if( 200<pt && pt<300)
      scale_factor =  0.9766315701807073;
    if( 300<pt && pt<600)
      scale_factor =  0.9748256225693339;
    if( 600<pt && pt<1000)
      scale_factor =  0.9603165903672826;
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.9385400437200391;
    if( 30<pt && pt<50)
      scale_factor =  0.948300458728094;
    if( 50<pt && pt<70)
      scale_factor =  0.9569614973550692;
    if( 70<pt && pt<100)
      scale_factor =  0.96395228595033;
    if( 100<pt && pt<140)
      scale_factor =  0.969881763737521;
    if( 140<pt && pt<200)
      scale_factor =  0.9729258947186322;
    if( 200<pt && pt<300)
      scale_factor =  0.9766315701807073;
    if( 300<pt && pt<600)
      scale_factor =  0.9748256225693339;
    if( 600<pt && pt<1000)
      scale_factor =  0.9603165903672826;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.9385400437200391;
    if( 30<pt && pt<50)
      scale_factor =  0.948300458728094;
    if( 50<pt && pt<70)
      scale_factor =  0.9569614973550692;
    if( 70<pt && pt<100)
      scale_factor =  0.96395228595033;
    if( 100<pt && pt<140)
      scale_factor =  0.969881763737521;
    if( 140<pt && pt<200)
      scale_factor =  0.9729258947186322;
    if( 200<pt && pt<300)
      scale_factor =  0.9766315701807073;
    if( 300<pt && pt<600)
      scale_factor =  0.9748256225693339;
    if( 600<pt && pt<1000)
      scale_factor =  0.9603165903672826;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_LightTagJets_Mis_UL18(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  1.261626821875;
    if( 30<pt && pt<50)
      scale_factor =  1.2635281156;
    if( 50<pt && pt<70)
      scale_factor =  1.2572170342666669;
    if( 70<pt && pt<100)
      scale_factor =  1.245687416592647;
    if( 100<pt && pt<140)
      scale_factor =  1.2282338337333334;
    if( 140<pt && pt<200)
      scale_factor =  1.2135829041666668;
    if( 200<pt && pt<300)
      scale_factor =  1.1712895614999999;
    if( 300<pt && pt<600)
      scale_factor =  1.131385225;
    if( 600<pt && pt<1000)
      scale_factor =  1.1725721725000002;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  1.261626821875;
    if( 30<pt && pt<50)
      scale_factor =  1.2635281156;
    if( 50<pt && pt<70)
      scale_factor =  1.2572170342666669;
    if( 70<pt && pt<100)
      scale_factor =  1.245687416592647;
    if( 100<pt && pt<140)
      scale_factor =  1.2282338337333334;
    if( 140<pt && pt<200)
      scale_factor =  1.2135829041666668;
    if( 200<pt && pt<300)
      scale_factor =  1.1712895614999999;
    if( 300<pt && pt<600)
      scale_factor =  1.131385225;
    if( 600<pt && pt<1000)
      scale_factor =  1.1725721725000002;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  1.261626821875;
    if( 30<pt && pt<50)
      scale_factor =  1.2635281156;
    if( 50<pt && pt<70)
      scale_factor =  1.2572170342666669;
    if( 70<pt && pt<100)
      scale_factor =  1.245687416592647;
    if( 100<pt && pt<140)
      scale_factor =  1.2282338337333334;
    if( 140<pt && pt<200)
      scale_factor =  1.2135829041666668;
    if( 200<pt && pt<300)
      scale_factor =  1.1712895614999999;
    if( 300<pt && pt<600)
      scale_factor =  1.131385225;
    if( 600<pt && pt<1000)
      scale_factor =  1.1725721725000002;
  }
  return scale_factor;
}

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
//                    2017 DeepJet b-tag SF from POG                             //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////


double VLLAna::getScaleFactors_bTagJets_MedWP_UL17(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.9468925661619162;
    if( 30<pt && pt<50)
      scale_factor =  0.9514574838780591;
    if( 50<pt && pt<70)
      scale_factor =  0.9566494548637867;
    if( 70<pt && pt<100)
      scale_factor =  0.9621711425441439;
    if( 100<pt && pt<140)
      scale_factor =  0.9687021118945052;
    if( 140<pt && pt<200)
      scale_factor =  0.9735313360388883;
    if( 200<pt && pt<300)
      scale_factor =  0.9864921180770448;
    if( 300<pt && pt<600)
      scale_factor =  1.0009131677796945;
    if( 600<pt && pt<1000)
      scale_factor =  1.0268970800625024;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.9468925661619162;
    if( 30<pt && pt<50)
      scale_factor =  0.9514574838780591;
    if( 50<pt && pt<70)
      scale_factor =  0.9566494548637867;
    if( 70<pt && pt<100)
      scale_factor =  0.9621711425441439;
    if( 100<pt && pt<140)
      scale_factor =  0.9687021118945052;
    if( 140<pt && pt<200)
      scale_factor =  0.9735313360388883;
    if( 200<pt && pt<300)
      scale_factor =  0.9864921180770448;
    if( 300<pt && pt<600)
      scale_factor =  1.0009131677796945;
    if( 600<pt && pt<1000)
      scale_factor =  1.0268970800625024;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.9468925661619162;
    if( 30<pt && pt<50)
      scale_factor =  0.9514574838780591;
    if( 50<pt && pt<70)
      scale_factor =  0.9566494548637867;
    if( 70<pt && pt<100)
      scale_factor =  0.9621711425441439;
    if( 100<pt && pt<140)
      scale_factor =  0.9687021118945052;
    if( 140<pt && pt<200)
      scale_factor =  0.9735313360388883;
    if( 200<pt && pt<300)
      scale_factor =  0.9864921180770448;
    if( 300<pt && pt<600)
      scale_factor =  1.0009131677796945;
    if( 600<pt && pt<1000)
      scale_factor =  1.0268970800625024;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_cTagJets_Mis_UL17(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.9468925661619162;
    if( 30<pt && pt<50)
      scale_factor =  0.9514574838780591;
    if( 50<pt && pt<70)
      scale_factor =  0.9566494548637867;
    if( 70<pt && pt<100)
      scale_factor =  0.9621711425441439;
    if( 100<pt && pt<140)
      scale_factor =  0.9687021118945052;
    if( 140<pt && pt<200)
      scale_factor =  0.9735313360388883;
    if( 200<pt && pt<300)
      scale_factor =  0.9864921180770448;
    if( 300<pt && pt<600)
      scale_factor =  1.0009131677796945;
    if( 600<pt && pt<1000)
      scale_factor =  1.0268970800625024;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.9468925661619162;
    if( 30<pt && pt<50)
      scale_factor =  0.9514574838780591;
    if( 50<pt && pt<70)
      scale_factor =  0.9566494548637867;
    if( 70<pt && pt<100)
      scale_factor =  0.9621711425441439;
    if( 100<pt && pt<140)
      scale_factor =  0.9687021118945052;
    if( 140<pt && pt<200)
      scale_factor =  0.9735313360388883;
    if( 200<pt && pt<300)
      scale_factor =  0.9864921180770448;
    if( 300<pt && pt<600)
      scale_factor =  1.0009131677796945;
    if( 600<pt && pt<1000)
      scale_factor =  1.0268970800625024;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.9468925661619162;
    if( 30<pt && pt<50)
      scale_factor =  0.9514574838780591;
    if( 50<pt && pt<70)
      scale_factor =  0.9566494548637867;
    if( 70<pt && pt<100)
      scale_factor =  0.9621711425441439;
    if( 100<pt && pt<140)
      scale_factor =  0.9687021118945052;
    if( 140<pt && pt<200)
      scale_factor =  0.9735313360388883;
    if( 200<pt && pt<300)
      scale_factor =  0.9864921180770448;
    if( 300<pt && pt<600)
      scale_factor =  1.0009131677796945;
    if( 600<pt && pt<1000)
      scale_factor =  1.0268970800625024;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_LightTagJets_Mis_UL17(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  1.0609444925;
    if( 30<pt && pt<50)
      scale_factor =  1.0669117268000001;
    if( 50<pt && pt<70)
      scale_factor =  1.0673482528;
    if( 70<pt && pt<100)
      scale_factor =  1.0645362892999999;
    if( 100<pt && pt<140)
      scale_factor =  1.0588574812;
    if( 140<pt && pt<200)
      scale_factor =  1.05363298;
    if( 200<pt && pt<300)
      scale_factor =  1.0375362799999999;
    if( 300<pt && pt<600)
      scale_factor =  1.021040705;
    if( 600<pt && pt<1000)
      scale_factor =  1.0297876325;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  1.0609444925;
    if( 30<pt && pt<50)
      scale_factor =  1.0669117268000001;
    if( 50<pt && pt<70)
      scale_factor =  1.0673482528;
    if( 70<pt && pt<100)
      scale_factor =  1.0645362892999999;
    if( 100<pt && pt<140)
      scale_factor =  1.0588574812;
    if( 140<pt && pt<200)
      scale_factor =  1.05363298;
    if( 200<pt && pt<300)
      scale_factor =  1.0375362799999999;
    if( 300<pt && pt<600)
      scale_factor =  1.021040705;
    if( 600<pt && pt<1000)
      scale_factor =  1.0297876325;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  1.0609444925;
    if( 30<pt && pt<50)
      scale_factor =  1.0669117268000001;
    if( 50<pt && pt<70)
      scale_factor =  1.0673482528;
    if( 70<pt && pt<100)
      scale_factor =  1.0645362892999999;
    if( 100<pt && pt<140)
      scale_factor =  1.0588574812;
    if( 140<pt && pt<200)
      scale_factor =  1.05363298;
    if( 200<pt && pt<300)
      scale_factor =  1.0375362799999999;
    if( 300<pt && pt<600)
      scale_factor =  1.021040705;
    if( 600<pt && pt<1000)
      scale_factor =  1.0297876325;
  }
  return scale_factor;
}

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
//                    2016preVFP DeepJet b-tag SF from POG                       //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////
double VLLAna::getScaleFactors_bTagJets_MedWP_UL16preVFP(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.965285220171499;
    if( 30<pt && pt<50)
      scale_factor =  0.9723936981816573;
    if( 50<pt && pt<70)
      scale_factor =  0.9770719693927103;
    if( 70<pt && pt<100)
      scale_factor =  0.9789475911181795;
    if( 100<pt && pt<140)
      scale_factor =  0.9779003743918094;
    if( 140<pt && pt<200)
      scale_factor =  0.9752547774467298;
    if( 200<pt && pt<300)
      scale_factor =  0.9619218996682236;
    if( 300<pt && pt<600)
      scale_factor =  0.9388091008858146;
    if( 600<pt && pt<1000)
      scale_factor =  0.8814510327305389;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.965285220171499;
    if( 30<pt && pt<50)
      scale_factor =  0.9723936981816573;
    if( 50<pt && pt<70)
      scale_factor =  0.9770719693927103;
    if( 70<pt && pt<100)
      scale_factor =  0.9789475911181795;
    if( 100<pt && pt<140)
      scale_factor =  0.9779003743918094;
    if( 140<pt && pt<200)
      scale_factor =  0.9752547774467298;
    if( 200<pt && pt<300)
      scale_factor =  0.9619218996682236;
    if( 300<pt && pt<600)
      scale_factor =  0.9388091008858146;
    if( 600<pt && pt<1000)
      scale_factor =  0.8814510327305389;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.965285220171499;
    if( 30<pt && pt<50)
      scale_factor =  0.9723936981816573;
    if( 50<pt && pt<70)
      scale_factor =  0.9770719693927103;
    if( 70<pt && pt<100)
      scale_factor =  0.9789475911181795;
    if( 100<pt && pt<140)
      scale_factor =  0.9779003743918094;
    if( 140<pt && pt<200)
      scale_factor =  0.9752547774467298;
    if( 200<pt && pt<300)
      scale_factor =  0.9619218996682236;
    if( 300<pt && pt<600)
      scale_factor =  0.9388091008858146;
    if( 600<pt && pt<1000)
      scale_factor =  0.8814510327305389;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_cTagJets_Mis_UL16preVFP(float eta, float pt){
  double scale_factor = 1.0;
  
  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.965285220171499;
    if( 30<pt && pt<50)
      scale_factor =  0.9723936981816573;
    if( 50<pt && pt<70)
      scale_factor =  0.9770719693927103;
    if( 70<pt && pt<100)
      scale_factor =  0.9789475911181795;
    if( 100<pt && pt<140)
      scale_factor =  0.9779003743918094;
    if( 140<pt && pt<200)
      scale_factor =  0.9752547774467298;
    if( 200<pt && pt<300)
      scale_factor =  0.9619218996682236;
    if( 300<pt && pt<600)
      scale_factor =  0.9388091008858146;
    if( 600<pt && pt<1000)
      scale_factor =  0.8814510327305389;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.965285220171499;
    if( 30<pt && pt<50)
      scale_factor =  0.9723936981816573;
    if( 50<pt && pt<70)
      scale_factor =  0.9770719693927103;
    if( 70<pt && pt<100)
      scale_factor =  0.9789475911181795;
    if( 100<pt && pt<140)
      scale_factor =  0.9779003743918094;
    if( 140<pt && pt<200)
      scale_factor =  0.9752547774467298;
    if( 200<pt && pt<300)
      scale_factor =  0.9619218996682236;
    if( 300<pt && pt<600)
      scale_factor =  0.9388091008858146;
    if( 600<pt && pt<1000)
      scale_factor =  0.8814510327305389;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.965285220171499;
    if( 30<pt && pt<50)
      scale_factor =  0.9723936981816573;
    if( 50<pt && pt<70)
      scale_factor =  0.9770719693927103;
    if( 70<pt && pt<100)
      scale_factor =  0.9789475911181795;
    if( 100<pt && pt<140)
      scale_factor =  0.9779003743918094;
    if( 140<pt && pt<200)
      scale_factor =  0.9752547774467298;
    if( 200<pt && pt<300)
      scale_factor =  0.9619218996682236;
    if( 300<pt && pt<600)
      scale_factor =  0.9388091008858146;
    if( 600<pt && pt<1000)
      scale_factor =  0.8814510327305389;
  }
  
  return scale_factor;
}
double VLLAna::getScaleFactors_LightTagJets_Mis_UL16preVFP(float eta, float pt){
  double scale_factor = 1.0;
  
  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  1.0891229171875;
    if( 30<pt && pt<50)
      scale_factor =  1.0143572200000002;
    if( 50<pt && pt<70)
      scale_factor =  0.9793503616666667;
    if( 70<pt && pt<100)
      scale_factor =  0.9661437393933823;
    if( 100<pt && pt<140)
      scale_factor =  0.9666259133333334;
    if( 140<pt && pt<200)
      scale_factor =  0.9740534354166666;
    if( 200<pt && pt<300)
      scale_factor =  1.01447384875;
    if( 300<pt && pt<600)
      scale_factor =  1.0879333;
    if( 600<pt && pt<1000)
      scale_factor =  1.29300115;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  1.0891229171875;
    if( 30<pt && pt<50)
      scale_factor =  1.0143572200000002;
    if( 50<pt && pt<70)
      scale_factor =  0.9793503616666667;
    if( 70<pt && pt<100)
      scale_factor =  0.9661437393933823;
    if( 100<pt && pt<140)
      scale_factor =  0.9666259133333334;
    if( 140<pt && pt<200)
      scale_factor =  0.9740534354166666;
    if( 200<pt && pt<300)
      scale_factor =  1.01447384875;
    if( 300<pt && pt<600)
      scale_factor =  1.0879333;
    if( 600<pt && pt<1000)
      scale_factor =  1.29300115;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  1.0891229171875;
    if( 30<pt && pt<50)
      scale_factor =  1.0143572200000002;
    if( 50<pt && pt<70)
      scale_factor =  0.9793503616666667;
    if( 70<pt && pt<100)
      scale_factor =  0.9661437393933823;
    if( 100<pt && pt<140)
      scale_factor =  0.9666259133333334;
    if( 140<pt && pt<200)
      scale_factor =  0.9740534354166666;
    if( 200<pt && pt<300)
      scale_factor =  1.01447384875;
    if( 300<pt && pt<600)
      scale_factor =  1.0879333;
    if( 600<pt && pt<1000)
      scale_factor =  1.29300115;
  }
  return scale_factor;
}

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
//                   2016postVFP DeepJet b-tag SF from POG                       //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////
double VLLAna::getScaleFactors_bTagJets_MedWP_UL16postVFP(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.9602778132842826;
    if( 30<pt && pt<50)
      scale_factor =  0.9797095808173084;
    if( 50<pt && pt<70)
      scale_factor =  0.9944623945213587;
    if( 70<pt && pt<100)
      scale_factor =  1.0034659214160908;
    if( 100<pt && pt<140)
      scale_factor =  1.0070710793027073;
    if( 140<pt && pt<200)
      scale_factor =  1.0057005624992674;
    if( 200<pt && pt<300)
      scale_factor =  0.9885786590502784;
    if( 300<pt && pt<600)
      scale_factor =  0.9516725479232158;
    if( 600<pt && pt<1000)
      scale_factor =  0.8512812166894421;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.9602778132842826;
    if( 30<pt && pt<50)
      scale_factor =  0.9797095808173084;
    if( 50<pt && pt<70)
      scale_factor =  0.9944623945213587;
    if( 70<pt && pt<100)
      scale_factor =  1.0034659214160908;
    if( 100<pt && pt<140)
      scale_factor =  1.0070710793027073;
    if( 140<pt && pt<200)
      scale_factor =  1.0057005624992674;
    if( 200<pt && pt<300)
      scale_factor =  0.9885786590502784;
    if( 300<pt && pt<600)
      scale_factor =  0.9516725479232158;
    if( 600<pt && pt<1000)
      scale_factor =  0.8512812166894421;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.9602778132842826;
    if( 30<pt && pt<50)
      scale_factor =  0.9797095808173084;
    if( 50<pt && pt<70)
      scale_factor =  0.9944623945213587;
    if( 70<pt && pt<100)
      scale_factor =  1.0034659214160908;
    if( 100<pt && pt<140)
      scale_factor =  1.0070710793027073;
    if( 140<pt && pt<200)
      scale_factor =  1.0057005624992674;
    if( 200<pt && pt<300)
      scale_factor =  0.9885786590502784;
    if( 300<pt && pt<600)
      scale_factor =  0.9516725479232158;
    if( 600<pt && pt<1000)
      scale_factor =  0.8512812166894421;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_cTagJets_Mis_UL16postVFP(float eta, float pt){
  double scale_factor = 1.0;

    if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  0.9602778132842826;
    if( 30<pt && pt<50)
      scale_factor =  0.9797095808173084;
    if( 50<pt && pt<70)
      scale_factor =  0.9944623945213587;
    if( 70<pt && pt<100)
      scale_factor =  1.0034659214160908;
    if( 100<pt && pt<140)
      scale_factor =  1.0070710793027073;
    if( 140<pt && pt<200)
      scale_factor =  1.0057005624992674;
    if( 200<pt && pt<300)
      scale_factor =  0.9885786590502784;
    if( 300<pt && pt<600)
      scale_factor =  0.9516725479232158;
    if( 600<pt && pt<1000)
      scale_factor =  0.8512812166894421;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  0.9602778132842826;
    if( 30<pt && pt<50)
      scale_factor =  0.9797095808173084;
    if( 50<pt && pt<70)
      scale_factor =  0.9944623945213587;
    if( 70<pt && pt<100)
      scale_factor =  1.0034659214160908;
    if( 100<pt && pt<140)
      scale_factor =  1.0070710793027073;
    if( 140<pt && pt<200)
      scale_factor =  1.0057005624992674;
    if( 200<pt && pt<300)
      scale_factor =  0.9885786590502784;
    if( 300<pt && pt<600)
      scale_factor =  0.9516725479232158;
    if( 600<pt && pt<1000)
      scale_factor =  0.8512812166894421;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  0.9602778132842826;
    if( 30<pt && pt<50)
      scale_factor =  0.9797095808173084;
    if( 50<pt && pt<70)
      scale_factor =  0.9944623945213587;
    if( 70<pt && pt<100)
      scale_factor =  1.0034659214160908;
    if( 100<pt && pt<140)
      scale_factor =  1.0070710793027073;
    if( 140<pt && pt<200)
      scale_factor =  1.0057005624992674;
    if( 200<pt && pt<300)
      scale_factor =  0.9885786590502784;
    if( 300<pt && pt<600)
      scale_factor =  0.9516725479232158;
    if( 600<pt && pt<1000)
      scale_factor =  0.8512812166894421;
  }
  return scale_factor;
}
double VLLAna::getScaleFactors_LightTagJets_Mis_UL16postVFP(float eta, float pt){
  double scale_factor = 1.0;

  if(fabs(eta)<0.8){
    if( 20<pt && pt<30)
      scale_factor =  1.4366607585625;
    if( 30<pt && pt<50)
      scale_factor =  1.40375850592;
    if( 50<pt && pt<70)
      scale_factor =  1.3876478866533333;
    if( 70<pt && pt<100)
      scale_factor =  1.3806909318060294;
    if( 100<pt && pt<140)
      scale_factor =  1.3792585399466668;
    if( 140<pt && pt<200)
      scale_factor =  1.3812046415833334;
    if( 200<pt && pt<300)
      scale_factor =  1.39553313625;
    if( 300<pt && pt<600)
      scale_factor =  1.425792442;
    if( 600<pt && pt<1000)
      scale_factor =  1.529614493;
    
  }
  
  else if(0.8<fabs(eta) && fabs(eta)<1.6){
    if( 20<pt && pt<30)
      scale_factor =  1.4366607585625;
    if( 30<pt && pt<50)
      scale_factor =  1.40375850592;
    if( 50<pt && pt<70)
      scale_factor =  1.3876478866533333;
    if( 70<pt && pt<100)
      scale_factor =  1.3806909318060294;
    if( 100<pt && pt<140)
      scale_factor =  1.3792585399466668;
    if( 140<pt && pt<200)
      scale_factor =  1.3812046415833334;
    if( 200<pt && pt<300)
      scale_factor =  1.39553313625;
    if( 300<pt && pt<600)
      scale_factor =  1.425792442;
    if( 600<pt && pt<1000)
      scale_factor =  1.529614493;
    
  }
  
  else if(1.6<fabs(eta) && fabs(eta)<2.5){
    if( 20<pt && pt<30)
      scale_factor =  1.4366607585625;
    if( 30<pt && pt<50)
      scale_factor =  1.40375850592;
    if( 50<pt && pt<70)
      scale_factor =  1.3876478866533333;
    if( 70<pt && pt<100)
      scale_factor =  1.3806909318060294;
    if( 100<pt && pt<140)
      scale_factor =  1.3792585399466668;
    if( 140<pt && pt<200)
      scale_factor =  1.3812046415833334;
    if( 200<pt && pt<300)
      scale_factor =  1.39553313625;
    if( 300<pt && pt<600)
      scale_factor =  1.425792442;
    if( 600<pt && pt<1000)
      scale_factor =  1.529614493;
  }
  return scale_factor;
}

