//-----------------------------------------------------------------------//
//         Muon Scale Factors for ultralegacy data                       //
//                                                                       //
//     (Contact Yash to understand any value.function)                   //
//-----------------------------------------------------------------------//

// Following functions and corrections can be found here:
// Muon Medium ID and Isolation Scale Factors 

// 2016preVFP  = getSFMuonUL16preVFP_ID(float pt, float eta)  and getSFMuonUL16preVFP_ISO(float pt, float eta)
// 2016postVFP = getSFMuonUL16postVFP_ID(float pt, float eta) and getSFMuonUL16postVFP_ISO(float pt, float eta)
// 2017        = getSFMuonUL17_ID(float pt, float eta) and getSFMuonUL17_ISO(float pt, float eta)
// 2018        = getSFMuonUL18_ID(float pt, float eta) and getSFMuonUL18_ISO(float pt, float eta)
//-------------------------------------------------------------------------------------------------------------------

float VLLAna:: getSFMuonUL18_ID(float pt,float eta){
  float scale_factor=1.0;

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
float VLLAna:: getSFMuonUL18_ISO( float pt,float eta){
  float scale_factor=1.0;
  
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

///////////////////////////////////////////////////////
//            2017 Muon ID&ISO SFs                   //
///////////////////////////////////////////////////////
//IDScaleFactors(Muons): 2017
float VLLAna:: getSFMuonUL17_ID(float pt, float eta){
  float scale_factor=1.0;

  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor =  0.9924863614579832;
    if( 20<pt && pt<25)
      scale_factor =  0.9954816932715648;
    if( 25<pt && pt<30)
      scale_factor = 0.9955697844976936 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9951603878132708 ;
    if( 40<pt && pt<50)
      scale_factor =  0.9951105073375844;
    if( 50<pt && pt<60)
      scale_factor = 0.9951976038330612 ;
    if( 60<pt && pt<120)
      scale_factor = 0.994666968105307 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.994666968105307 ;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor = 0.9956696921512976 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9939450305313444 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9947276454652628 ;
    if( 30<pt && pt<40)
      scale_factor = 0.995398905706962 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9957428336764376 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9955082832064152 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9955641990427432 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9955641990427432 ;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor =  0.9933986091392504;
    if( 20<pt && pt<25)
      scale_factor = 0.9927132381475516 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9941829604829172 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9944960514832868 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9949584995961004 ;
    if( 50<pt && pt<60)
      scale_factor =  0.9944590661336324;
    if( 60<pt && pt<120)
      scale_factor = 0.994652812538256 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.994652812538256 ;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor =  0.9693846291868856;
    if( 20<pt && pt<25)
      scale_factor =  0.9747230928008838;
    if( 25<pt && pt<30)
      scale_factor = 0.9759171153765592 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9764452514984272 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9758862144605156 ;
    if( 50<pt && pt<60)
      scale_factor =  0.9742452980764128;
    if( 60<pt && pt<120)
      scale_factor = 0.974770219850666 ;
    if( 120<pt && pt<3000)
      scale_factor =  0.974770219850666;
  }
  return scale_factor;
}

//IsoScaleFactors(Muons): 2017
float VLLAna:: getSFMuonUL17_ISO(float pt, float eta){
  float scale_factor=1.0;

  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor =  0.9947823718048496;
    if( 20<pt && pt<25)
      scale_factor = 1.0016942717758164 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9971703762914856 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9973609608464306 ;
    if( 40<pt && pt<50)
      scale_factor =  0.997806350070658;
    if( 50<pt && pt<60)
      scale_factor = 0.9978293376015096 ;
    if( 60<pt && pt<120)
      scale_factor = 0.998652869099414 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.998652869099414 ;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor =  1.0183992947285718;
    if( 20<pt && pt<25)
      scale_factor = 1.0038832134794526 ;
    if( 25<pt && pt<30)
      scale_factor =  1.0075445153230558;
    if( 30<pt && pt<40)
      scale_factor =  1.0020084794113078;
    if( 40<pt && pt<50)
      scale_factor =  0.9992002400422144;
    if( 50<pt && pt<60)
      scale_factor = 0.998833434134476 ;
    if( 60<pt && pt<120)
      scale_factor =  1.000293946420109;
    if( 120<pt && pt<3000)
      scale_factor =  1.000293946420109;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor =  1.0284365276526;
    if( 20<pt && pt<25)
      scale_factor = 1.0231949144028831 ;
    if( 25<pt && pt<30)
      scale_factor =  1.0139222529965777;
    if( 30<pt && pt<40)
      scale_factor = 1.006437043406326 ;
    if( 40<pt && pt<50)
      scale_factor = 1.0024938664942575 ;
    if( 50<pt && pt<60)
      scale_factor = 1.0010470387044712 ;
    if( 60<pt && pt<120)
      scale_factor =  1.0004498131972417;
    if( 120<pt && pt<3000)
      scale_factor =  1.0004498131972417;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor =  1.0300218449052083;
    if( 20<pt && pt<25)
      scale_factor =  1.024066132761046;
    if( 25<pt && pt<30)
      scale_factor =  1.0156122873346385;
    if( 30<pt && pt<40)
      scale_factor = 1.0060772873232575 ;
    if( 40<pt && pt<50)
      scale_factor =  1.002661144530422;
    if( 50<pt && pt<60)
      scale_factor = 1.0005458111900405 ;
    if( 60<pt && pt<120)
      scale_factor =  1.0005556400044369;
    if( 120<pt && pt<3000)
      scale_factor =  1.0005556400044369;
  }
  return scale_factor;
}


///////////////////////////////////////////////////////
//            2016preVFP Muon ID&ISO SFs            //
///////////////////////////////////////////////////////
//IDScaleFactors(Muons): 2016 preVFP

float VLLAna:: getSFMuonUL16preVFP_ID(float pt, float eta){
  float scale_factor=1.0;

  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor = 0.9958995777819518 ;
    if( 20<pt && pt<25)
      scale_factor = 0.997407446293603 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9966900133732628 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9963886027389632 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9963339691909062 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9958585208059144 ;
    if( 60<pt && pt<120)
      scale_factor = 0.995911293220199 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.995911293220199 ;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor = 0.9943616457833304 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9942061202269802 ;
    if( 25<pt && pt<30)
      scale_factor = 0.99363947046918 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9942575420308007 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9947647951586552 ;
    if( 50<pt && pt<60)
      scale_factor =  0.9943155135270608;
    if( 60<pt && pt<120)
      scale_factor = 0.9933211462795392 ;
    if( 120<pt && pt<3000)
      scale_factor =  0.9933211462795392;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor = 0.9944285295926252 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9939925358291593 ;
    if( 25<pt && pt<30)
      scale_factor = 0.994002465208057 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9947471249733232 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9954753870789153 ;
    if( 50<pt && pt<60)
      scale_factor = 0.995042227697235 ;
    if( 60<pt && pt<120)
      scale_factor = 0.995414618581377 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.995414618581377 ;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor = 0.974452901727927 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9741967439553206 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9745366426282696 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9748921822166626 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9749005301709184 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9748468540075824 ;
    if( 60<pt && pt<120)
      scale_factor =  0.9741452452429542;
    if( 120<pt && pt<3000)
      scale_factor = 0.9741452452429542 ;
  }
  return scale_factor;
}

//IsoScaleFactors(Muons): 2016 preVFP
float VLLAna:: getSFMuonUL16preVFP_ISO(float pt, float eta){
  float scale_factor=1.0;

  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor = 0.9854219941983452 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9873274510709348 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9857570348249912 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9930490361264857 ;
    if( 40<pt && pt<50)
      scale_factor =  0.996406871349816;
    if( 50<pt && pt<60)
      scale_factor = 0.996876679315402 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9986788196912988 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9986788196912988 ;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor = 0.9801483018547148 ;
    if( 20<pt && pt<25)
      scale_factor = 0.987034038637174 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9961324150426912 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9963549633414416 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9970368902923656 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9971575821289996 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9988473955529408 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9988473955529408 ;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor = 0.9972440980735284 ;
    if( 20<pt && pt<25)
      scale_factor = 0.996750888945838 ;
    if( 25<pt && pt<30)
      scale_factor = 1.001137262338288 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9988626071423738 ;
    if( 40<pt && pt<50)
      scale_factor = 0.998769936879404 ;
    if( 50<pt && pt<60)
      scale_factor = 0.998384760194074 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9995753755081986 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9995753755081986 ;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor = 1.0073108674943814 ;
    if( 20<pt && pt<25)
      scale_factor = 1.0036700117457582 ;
    if( 25<pt && pt<30)
      scale_factor = 1.0050586818252794 ;
    if( 30<pt && pt<40)
      scale_factor = 1.0003546800592864 ;
    if( 40<pt && pt<50)
      scale_factor = 1.0009520269922647 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9998076464435772 ;
    if( 60<pt && pt<120)
      scale_factor = 1.0005662186130682 ;
    if( 120<pt && pt<3000)
      scale_factor = 1.0005662186130682 ;
  }
  return scale_factor;
}


///////////////////////////////////////////////////////
//            2016postVFP Muon ID&ISO SFs            //
///////////////////////////////////////////////////////
//IDScaleFactors(Muons): 2016 postVFP

float VLLAna:: getSFMuonUL16postVFP_ID(float pt, float eta){
  float scale_factor=1.0;
  
  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor = 1.0000041738158354 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9990199540731494 ;
    if( 25<pt && pt<30)
      scale_factor = 0.999548660646305 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9992690049961372 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9992537131247722 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9987772239305884 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9988329307945766 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9988329307945766 ;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor = 0.9935125772523964 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9945582990388512 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9963131040992652 ;
    if( 30<pt && pt<40)
      scale_factor = 0.995557465152997 ;
    if( 40<pt && pt<50)
      scale_factor = 0.995849044136711 ;
    if( 50<pt && pt<60)
      scale_factor =  0.9960145401876056;
    if( 60<pt && pt<120)
      scale_factor = 0.9955682146213594 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9955682146213594 ;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor = 0.9952467407300474 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9956863884750184 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9963280270258894 ;
    if( 30<pt && pt<40)
      scale_factor =  0.9963540789044504;
    if( 40<pt && pt<50)
      scale_factor =0.997101761840005  ;
    if( 50<pt && pt<60)
      scale_factor = 0.9967922838866176 ;
    if( 60<pt && pt<120)
      scale_factor =  0.9967515371285344;
    if( 120<pt && pt<3000)
      scale_factor = 0.9967515371285344 ;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor = 0.9785830351419386 ;
    if( 20<pt && pt<25)
      scale_factor = 0.9768825062950852 ;
    if( 25<pt && pt<30)
      scale_factor = 0.9771488876540624 ;
    if( 30<pt && pt<40)
      scale_factor = 0.978591269895218 ;
    if( 40<pt && pt<50)
      scale_factor =  0.9775049786244718;
    if( 50<pt && pt<60)
      scale_factor = 0.978501128153901 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9759579114670028 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9759579114670028 ;
  }
  return scale_factor;
}

//IsoScaleFactors(Muons): 2016 postVFP
float VLLAna:: getSFMuonUL16postVFP_ISO(float pt, float eta){
  float scale_factor=1.0;
  
  if(fabs(eta)<0.9){
    if( 15<pt && pt<20)
      scale_factor =  0.9896638155504588;
    if( 20<pt && pt<25)
      scale_factor =  0.9948288271080996;
    if( 25<pt && pt<30)
      scale_factor = 0.991510525326622 ;
    if( 30<pt && pt<40)
      scale_factor = 0.9956044247397018 ;
    if( 40<pt && pt<50)
      scale_factor = 0.996982924553536 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9971974780479392 ;
    if( 60<pt && pt<120)
      scale_factor =  0.9990199324137672;
    if( 120<pt && pt<3000)
      scale_factor =  0.9990199324137672;
    
  }
  
  else if(0.9<fabs(eta) && fabs(eta)<1.2){
    if( 15<pt && pt<20)
      scale_factor =  1.0019934719330423;
    if( 20<pt && pt<25)
      scale_factor =  1.0003741848922898;
    if( 25<pt && pt<30)
      scale_factor =  1.003365985645747;
    if( 30<pt && pt<40)
      scale_factor = 1.0005506260825516 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9979449902609792 ;
    if( 50<pt && pt<60)
      scale_factor =  0.9996145084763732;
    if( 60<pt && pt<120)
      scale_factor = 1.0000428280021068 ;
    if( 120<pt && pt<3000)
      scale_factor = 1.0000428280021068 ;
  }

  
  else if(1.2<fabs(eta) && fabs(eta)<2.1){
    if( 15<pt && pt<20)
      scale_factor = 1.0033017968451217 ;
    if( 20<pt && pt<25)
      scale_factor = 1.0070463673112666 ;
    if( 25<pt && pt<30)
      scale_factor = 1.0051735075912909 ;
    if( 30<pt && pt<40)
      scale_factor = 1.0015919713475052 ;
    if( 40<pt && pt<50)
      scale_factor = 0.9998315341668478 ;
    if( 50<pt && pt<60)
      scale_factor = 0.9988739251057712 ;
    if( 60<pt && pt<120)
      scale_factor = 0.9998786688203968 ;
    if( 120<pt && pt<3000)
      scale_factor = 0.9998786688203968 ;
  }
  
  else if(2.1<fabs(eta) && fabs(eta)<2.4){
    if( 15<pt && pt<20)
      scale_factor = 1.0137764681943071 ;
    if( 20<pt && pt<25)
      scale_factor = 1.010785849114932 ;
    if( 25<pt && pt<30)
      scale_factor = 1.0042843905385197 ;
    if( 30<pt && pt<40)
      scale_factor = 1.003150058119613 ;
    if( 40<pt && pt<50)
      scale_factor = 1.001092172040312 ;
    if( 50<pt && pt<60)
      scale_factor = 1.0010712993352038 ;
    if( 60<pt && pt<120)
      scale_factor = 1.000794927481125 ;
    if( 120<pt && pt<3000)
      scale_factor = 1.000794927481125 ;
  }
  return scale_factor;
}


