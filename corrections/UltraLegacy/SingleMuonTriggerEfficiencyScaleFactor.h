//.........................................................//
//                                                         //
//        Trigger Efficiency scale factor                  //
//        (Using Ultra Legacy Samples)                     //
//.........................................................//

#include "TMath.h"


/*********************************************************************************
 *                                  2016preVFP                                   *
 *********************************************************************************/
float TriggEffUL16preVFPMC_IsoMu24( float pt, float eta){
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.971934*(1.0+TMath::Erf((pt-23.4424)/(2.0*0.178376)));
  }
  else if(fabs(eta)>1.479){
    eff = 0.5*0.966306*(1.0+TMath::Erf((pt-23.9592)/(2.0*0.487943)));
  }
  return eff;
}

float TriggEffUL16preVFPData_IsoMu24( float pt, float eta)
{
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.952501*(1.0+TMath::Erf((pt-23.9491)/(2.0*0.405232)));
  }
  else if(fabs(eta)>1.479){
    if(pt<=100)
      eff = 0.5*0.951936*(1.0+TMath::Erf((pt-23.9399)/(2.0*0.533316)));
    else
      eff = 0.774;
  }
  return eff;
}

/*********************************************************************************
 *                                  2016postVFP                                  *
 *********************************************************************************/
float TriggEffUL16postVFPMC_IsoMu24( float pt, float eta){
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.974532*(1.0+TMath::Erf((pt-23.3954)/(2.0*0.151737)));
  }
  else if(fabs(eta)>1.479){
    eff = 0.5*0.970343*(1.0+TMath::Erf((pt-23.977)/(2.0*0.445236)));
  }
  return eff;
}

float TriggEffUL16postVFPData_IsoMu24( float pt, float eta)
{
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.963135*(1.0+TMath::Erf((pt-23.9546)/(2.0*0.363316)));
  }
  else if(fabs(eta)>1.479){
    eff = 0.5*0.96043*(1.0+TMath::Erf((pt-23.9677)/(2.0*0.463984)));
  }
  return eff;
}

/*********************************************************************************
 *                                    2017                                       *
 *********************************************************************************/
float TriggEffUL17MC_IsoMu27( float pt, float eta){
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.960212*(1.0+TMath::Erf((pt-26.9652)/(2.0*0.597564)));
  }
  else if(fabs(eta)>1.479 && fabs(eta)<=2.4){
    eff = 0.5*0.94303*(1.0+TMath::Erf((pt-26.9123)/(2.0*0.747516)));
  }
  return eff;
}

float TriggEffUL17Data_IsoMu27( float pt, float eta){
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    if(pt<=100)
      eff = 0.5*0.929318*(1.0+TMath::Erf((pt-26.9424)/(2.0*0.612448)));
    else
      eff = 0.958305;
  }
  else if(fabs(eta)>1.479){
    eff = 0.5*0.94163*(1.0+TMath::Erf((pt-26.9092)/(2.0*0.844543)));
  }
  return eff;
}

/*********************************************************************************
 *                                    2018                                       *
 *********************************************************************************/
float TriggEffUL18MC_IsoMu24( float pt, float eta){
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.971878*(1.0+TMath::Erf((pt-23.9589)/(2.0*0.356627)));
  }
  else if(fabs(eta)>1.479){
    eff = 0.5*0.958908*(1.0+TMath::Erf((pt-23.9493)/(2.0*0.408312)));
  }
  return eff;
}

float TriggEffUL18Data_IsoMu24( float pt, float eta){
  if( pt<10 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.479){
    eff = 0.5*0.950463*(1.0+TMath::Erf((pt-23.9593)/(2.0*0.375996)));
  }
  else if(fabs(eta)>1.479){
    eff = 0.5*0.953162*(1.0+TMath::Erf((pt-23.9459)/(2.0*0.457351)));
  }
  return eff;
}
