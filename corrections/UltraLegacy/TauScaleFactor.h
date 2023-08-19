//-----------------------------------------------------------------------//
//         Tau Scale Factors for ultralegacy data                        //
//                                                                       //
//     (Contact Yash to understand any value,function)                   //
//-----------------------------------------------------------------------//

// Following functions and corrections can be found here:
// Tau Tight AntiJet ID, Loose AntiMu/AntiEle Scale Factors 

// 2016preVFP  = getSFTausUL16preVFP_AntiJet(float pt)  , getSFTausUL16preVFP_AntiEle(float eta)  , getSFTausUL16preVFP_AntiMu(float eta)
// 2016postVFP = getSFTausUL16postVFP_AntiJet(float pt) , getSFTausUL16postVFP_AntiEle(float eta) , getSFTausUL16postVFP_AntiMu(float eta)
// 2017        = getSFTausUL17_AntiJet(float pt)        , getSFTausUL17_AntiEle(float eta)        , getSFTausUL17_AntiMu(float eta)
// 2018        = getSFTausUL18_AntiJet(float pt)        , getSFTausUL18_AntiEle(float eta)        , getSFTausUL18_AntiMu(float eta) 
//-------------------------------------------------------------------------------------------------------------------


//2018
//AntiJetScaleFactors(Taus): 2018
double VLLAna::getSFTausUL18_AntiJet(float pt){
  double scale_factor=1.0;
  
  if( 20<pt && pt<25)
    scale_factor = 0.92814490;
  if( 25<pt && pt<30)
    scale_factor = 0.86074460;
  if( 30<pt && pt<35)
    scale_factor = 0.89813290;
  if( 35<pt && pt<40)
    scale_factor = 0.89707170;
  if( 40<pt && pt<500)
    scale_factor = 0.89079360;
  if( 500<pt && pt<1000)
    scale_factor = 0.89079360;
  if( 1000<pt && pt<2000)
    scale_factor = 0.89079360;
  
  return scale_factor;

}
//AntiEleScaleFactors(Taus): 2018
double VLLAna::getSFTausUL18_AntiEle(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<1.46)
    scale_factor = 0.92;
  if( 1.46<eta && eta<1.558)
    scale_factor = 1.0;
  if( 1.558<eta && eta<2.3)
    scale_factor = 0.94;
    
  return scale_factor;
}

//AntiMuScaleFactors(Taus): 2018
double VLLAna::getSFTausUL18_AntiMu(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<0.4)
    scale_factor = 1.31325;
  if( 0.4<eta && eta<0.8)
    scale_factor = 1.20266;
  if( 0.8<eta && eta<1.2)
    scale_factor = 0.95748;
  if( 1.2<eta && eta<1.7)
    scale_factor = 1.13798;
  if( 1.7<eta && eta<2.3)
    scale_factor = 6.01864;
  
  return scale_factor;

}

//---------------------------------------------------//
//                2017                               //
//---------------------------------------------------//
//AntiJetScaleFactors(Taus): 2017
double VLLAna::getSFTausUL17_AntiJet(float pt){
  double scale_factor=1.0;

  if( 20<pt && pt<25)
    scale_factor = 0.88092090;
  if( 25<pt && pt<30)
    scale_factor = 0.90134870;
  if( 30<pt && pt<35)
    scale_factor = 0.88215320;
  if( 35<pt && pt<40)
    scale_factor = 0.83283400;
  if( 40<pt && pt<500)
    scale_factor = 0.84416670;
  if( 500<pt && pt<1000)
    scale_factor = 0.84416670;
  if( 1000<pt && pt<2000)
    scale_factor = 0.84416670;
  
  return scale_factor;

}
//AntiEleScaleFactors(Taus): 2017
double VLLAna::getSFTausUL17_AntiEle(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<1.46)
    scale_factor = 0.97000;
  if( 1.46<eta && eta<1.558)
    scale_factor = 0.97000;
  if( 1.558<eta && eta<2.3)
    scale_factor = 0.85000;
    
  return scale_factor;
}

//AntiMuScaleFactors(Taus): 2017
double VLLAna::getSFTausUL17_AntiMu(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<0.4)
    scale_factor = 1.27455;
  if( 0.4<eta && eta<0.8)
    scale_factor = 1.19579;
  if( 0.8<eta && eta<1.2)
    scale_factor = 1.00426;
  if( 1.2<eta && eta<1.7)
    scale_factor = 0.80720;
  if( 1.7<eta && eta<2.3)
    scale_factor =3.63652;
  
  return scale_factor;

}
//---------------------------------------------------//
//                2016preVFP                         //
//---------------------------------------------------//
//AntiJetScaleFactors(Taus): 2016 preVFP
double VLLAna::getSFTausUL16preVFP_AntiJet(float pt){
  double scale_factor=1.0;

  if( 20<pt && pt<25)
    scale_factor = 1.02564100;
  if( 25<pt && pt<30)
    scale_factor = 1.00438100;
  if( 30<pt && pt<35)
    scale_factor = 0.96119740;
  if( 35<pt && pt<40)
    scale_factor = 0.97300020;
  if( 40<pt && pt<2000)
    scale_factor = 0.87672800;
  
  return scale_factor;

}
//AntiEleScaleFactors(Taus): 2016 preVFP
double VLLAna::getSFTausUL16preVFP_AntiEle(float eta){
  double scale_factor=1.0;
  
  if( 0.0<eta && eta<1.46)
    scale_factor = 1.00000;
  if( 1.46<eta && eta<1.558)
    scale_factor = 1.00000;
  if( 1.558<eta && eta<2.3)
    scale_factor = 1.04000;
    
  return scale_factor;
}

//AntiMuScaleFactors(Taus): 2016 preVFP
double VLLAna::getSFTausUL16preVFP_AntiMu(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<0.4)
    scale_factor = 1.14824;
  if( 0.4<eta && eta<0.8)
    scale_factor = 1.23390;
  if( 0.8<eta && eta<1.2)
    scale_factor = 1.33607;
  if( 1.2<eta && eta<1.7)
    scale_factor = 1.06373;
  if( 1.7<eta && eta<2.3)
    scale_factor = 4.76128;
  
  return scale_factor;

}

//---------------------------------------------------//
//                2016postVFP                        //
//---------------------------------------------------//
//AntiJetScaleFactors(Taus): 2016 postVFP
double VLLAna::getSFTausUL16postVFP_AntiJet(float pt){
  double scale_factor=1.0;

  if( 20<pt && pt<25)
    scale_factor = 0.97192130;
  if( 25<pt && pt<30)
    scale_factor = 0.95513300;
  if( 30<pt && pt<35)
    scale_factor =0.95673700 ;
  if( 35<pt && pt<40)
    scale_factor = 0.97832910;
  if( 40<pt && pt<500)
    scale_factor = 0.80529240;
  if( 500<pt && pt<1000)
    scale_factor = 0.80529240;
  if( 1000<pt && pt<2000)
    scale_factor = 0.80529240;
  
  return scale_factor;

}
//AntiEleScaleFactors(Taus): 2016 postVFP
double VLLAna::getSFTausUL16postVFP_AntiEle(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<1.46)
    scale_factor = 1.13000;
  if( 1.46<eta && eta<1.558)
    scale_factor = 1.00000;
  if( 1.558<eta && eta<2.3)
    scale_factor = 0.83000;
    
  return scale_factor;
}

//AntiMuScaleFactors(Taus): 2016 postVFP
double VLLAna::getSFTausUL16postVFP_AntiMu(float eta){
  double scale_factor=1.0;

  if( 0.0<eta && eta<0.4)
    scale_factor = 1.02901;
  if( 0.4<eta && eta<0.8)
    scale_factor = 1.25450;
  if( 0.8<eta && eta<1.2)
    scale_factor = 0.89939;
  if( 1.2<eta && eta<1.7)
    scale_factor = 1.24125;
  if( 1.7<eta && eta<2.3)
    scale_factor = 4.33843;
  
  return scale_factor;

}
