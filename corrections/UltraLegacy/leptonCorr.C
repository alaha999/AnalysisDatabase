//----------------------------------------------------------------------//
//Lepton Correction Functions                                           //
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

double getSFMuonUL18_ID(float pt,float eta){
  double scale_factor=1.0;

  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor =  0.997503630932556;
    if( 20<pt && pt<25)
      scale_factor =  0.9970098193760408;
    if( 25<pt && pt<30)
      scale_factor =  0.9967038731014324;
    if( 30<pt && pt<40)
      scale_factor =  0.9968067958281034;
    if( 40<pt && pt<50)
      scale_factor =  0.9967508548887346;
    if( 50<pt && pt<60)
      scale_factor =  0.9966229487883712;
    if( 60<pt && pt<120)
      scale_factor =  0.9960404563074258;
    if( 120<pt && pt<3000)
      scale_factor =  0.9960404563074258;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor =  0.9946687083751804;
    if( 20<pt && pt<25)
      scale_factor =  0.9945901104821656;
    if( 25<pt && pt<30)
      scale_factor =  0.9949123046983688;
    if( 30<pt && pt<40)
      scale_factor =  0.9956851566638726;
    if( 40<pt && pt<50)
      scale_factor =  0.995312757370098;
    if( 50<pt && pt<60)
      scale_factor =  0.9953453170396492;
    if( 60<pt && pt<120)
      scale_factor =  0.9952502092400578;
    if( 120<pt && pt<3000)
      scale_factor =  0.9952502092400578;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor =  0.9935059740562387;
    if( 20<pt && pt<25)
      scale_factor =  0.9938964039703309;
    if( 25<pt && pt<30)
      scale_factor =  0.9940771317309104;
    if( 30<pt && pt<40)
      scale_factor =  0.9941876412222066;
    if( 40<pt && pt<50)
      scale_factor =  0.9947739560711352;
    if( 50<pt && pt<60)
      scale_factor =  0.9944640815519576;
    if( 60<pt && pt<120)
      scale_factor =  0.9944321015185944;
    if( 120<pt && pt<3000)
      scale_factor =  0.9944321015185944;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor =  0.9741187787139896;
    if( 20<pt && pt<25)
      scale_factor =  0.9727131632621572;
    if( 25<pt && pt<30)
      scale_factor =  0.9739795198691632;
    if( 30<pt && pt<40)
      scale_factor =  0.9750724343730348;
    if( 40<pt && pt<50)
      scale_factor =  0.9747976871311668;
    if( 50<pt && pt<60)
      scale_factor =  0.9743746068723314;
    if( 60<pt && pt<120)
      scale_factor =  0.970208378910226;
    if( 120<pt && pt<3000)
      scale_factor =  0.970208378910226;
  }
  return scale_factor;
}

//IsoScaleFactors(Muons): 2018
double getSFMuonUL18_ISO( float pt,float eta){
  double scale_factor=1.0;

  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor =  0.9855709248030112;
    if( 20<pt && pt<25)
      scale_factor =  0.9915374149428736;
    if( 25<pt && pt<30)
      scale_factor =  0.9892802138927208;
    if( 30<pt && pt<40)
      scale_factor =  0.99429319088059;
    if( 40<pt && pt<50)
      scale_factor =  0.9960381793609222;
    if( 50<pt && pt<60)
      scale_factor =  0.9966122162214248;
    if( 60<pt && pt<120)
      scale_factor =  0.9982512434902386;
    if( 120<pt && pt<3000)
      scale_factor =  0.9982512434902386;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor =  0.9704305474456316;
    if( 20<pt && pt<25)
      scale_factor =  0.979495631900224;
    if( 25<pt && pt<30)
      scale_factor =  0.986109906870666;
    if( 30<pt && pt<40)
      scale_factor =  0.9882799134496284;
    if( 40<pt && pt<50)
      scale_factor =  0.9920317410868984;
    if( 50<pt && pt<60)
      scale_factor =  0.9944502663616424;
    if( 60<pt && pt<120)
      scale_factor =  0.9964834155289044;
    if( 120<pt && pt<3000)
      scale_factor =  0.9964834155289044;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor =  1.0033355765204894;
    if( 20<pt && pt<25)
      scale_factor =  1.0015352730781717;
    if( 25<pt && pt<30)
      scale_factor =  0.999623464660824;
    if( 30<pt && pt<40)
      scale_factor =  0.9994357007740622;
    if( 40<pt && pt<50)
      scale_factor =  0.99882097063955;
    if( 50<pt && pt<60)
      scale_factor =  0.999185450924234;
    if( 60<pt && pt<120)
      scale_factor =  0.9995171516432572;
    if( 120<pt && pt<3000)
      scale_factor =  0.9995171516432572;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor =  1.0252542402601108;
    if( 20<pt && pt<25)
      scale_factor =  1.0198418523288777;
    if( 25<pt && pt<30)
      scale_factor =  1.012454313839175;
    if( 30<pt && pt<40)
      scale_factor =  1.008064837308479;
    if( 40<pt && pt<50)
      scale_factor =  1.0037288955534218;
    if( 50<pt && pt<60)
      scale_factor =  1.0028456983691447;
    if( 60<pt && pt<120)
      scale_factor =  1.0029888816740478;
    if( 120<pt && pt<3000)
      scale_factor =  1.0029888816740478;
  }
  return scale_factor;
}
