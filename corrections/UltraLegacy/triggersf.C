//----------------------------------------------------------------------//
//Trigger Correction Functions                                          //
//Arnab Laha,Nov 25,2022                                                //
//Useful Documentation on ROOT::RVecOps namespace                       //
//https://root.cern/doc/master/group__vecops.html                       //
//----------------------------------------------------------------------//
#include<ROOT/RVec.hxx>
#include "TMath.h"
#include <TLorentzVector.h>
#include<iostream>
using std::cout;
using std::endl;

float TriggEff2018MC_IsoMu24(float pt, float eta){
  //
  if( pt<25 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.5){
    eff = (pt<=55)*(0.949912325615+2.68001891193*0.00001*TMath::Power(pt,-0.5)-TMath::Exp(-0.10374118089*(pt+0.4343762506))) + (pt>55)*((0.949912325615+2.68001891193*0.00001*TMath::Power(55,-0.5)-TMath::Exp(-0.10374118089*(55+0.4343762506)))-2.68001891193*0.00001*(pt-55));
    }
  else if(fabs(eta)>1.5 && fabs(eta)<=2.4){
    eff = (pt<=55)*(0.881728552912+6.18949336229*0.000000000000001*TMath::Power(pt,-0.5)-TMath::Exp(-0.101586572341*(pt-4.26963874374))) + (pt>55)*((0.881728552912+6.18949336229*0.000000000000001*TMath::Power(55,-0.5)-TMath::Exp(-0.101586572341*(55-4.26963874374)))-6.18949336229*0.000000000000001*(pt-55));
  }
  //
  return eff;
}

float TriggEff2018Data_IsoMu24( float pt, float eta){
  //
  if( pt<25 || eta>2.4 ) return 0.0;
  float eff = 0.0;
  if(fabs(eta)<=1.5){
    eff = (pt<=55)*(0.928419156519+9.24728175087*0.00001*TMath::Power(pt,-0.5)-TMath::Exp(-0.124285695727*(pt-4.86017165434))) + (pt>55)*((0.928419156519+9.24728175087*0.00001*TMath::Power(55,-0.5)-TMath::Exp(-0.124285695727*(55-4.86017165434)))-9.24728175087*0.00001*(pt-55));
  }
  else if(fabs(eta)>1.5 && fabs(eta)<=2.4){
    eff = (pt<=55)*(0.878354653113+1.74422248204*0.00001*TMath::Power(pt,-0.5)-TMath::Exp(-0.119594821538*(pt-8.31380862175))) + (pt>55)*((0.878354653113+1.74422248204*0.00001*TMath::Power(55,-0.5)-TMath::Exp(-0.119594821538*(55-8.31380862175)))-1.74422248204*0.00001*(pt-55));
  }
  //
  return eff;
}
