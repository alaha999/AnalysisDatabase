//-----------------------------------------------------------------------//
//         Electron Scale Factors for ultralegacy data                   //
//                                                                       //
//     (Contact Yash to understand any value.function)                   //
//-----------------------------------------------------------------------//

// Following functions and corrections can be found here:
// Electron CutBased Medium ID and Isolation and Reco Scale Factors 

// 2016preVFP  = getSFElectronUL16preVFP_IDIsO(float pt, float eta)  and getSFElectronUL16preVFP_Reco(float pt, float eta)

// 2016postVFP = getSFElectronUL16postVFP_IDIso(float pt, float eta) and getSFElectronUL16postVFP_Reco(float pt, float eta)

// 2017        = getSFElectronUL17_Reco(float pt, float eta) and getSFElectronUL17_IDIso(float pt, float eta)

// 2018        = getSFElectronUL18_Reco(float pt, float eta) and getSFElectronUL18_IDIso(float pt, float eta)
//-------------------------------------------------------------------------------------------------------------------

//Reco Scale Factors(Electrons): 2018
double VLLAna::getSFElectronUL18_Reco(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.99895179271698;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.99895179271698;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.1436463594436646;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9888888597488404;
    if(-1.0<eta && eta<0.0) 
      scale_factor = 1.0768293142318726;
    if(0.0<eta && eta<1.0) 
      scale_factor = 1.0768293142318726;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9888888597488404;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.1436463594436646;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.99895179271698;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.99895179271698;
  }
  if(20<pt && pt<45){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.98353910446167;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9887179732322692;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9754385948181152;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.98238343000412;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9886831045150756;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9865702390670776;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9864583611488342;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.987525999546051;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9791013598442078;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.9870129823684692;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9877049326896667;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9866803288459778;
    }
    
  if(45<pt && pt<75){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.98670756816864;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9887869358062744;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.96592116355896;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.98353910446167;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9877426028251648;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9876922965049744;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9855072498321532;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9886128306388856;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.98031085729599;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.9741935729980468;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9887869358062744;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9887869358062744;
    }

  if(75<pt && pt<100){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.996926248073578;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9939024448394777;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0338428020477295;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9979296326637268;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9897330403327942;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9897540807724;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9897540807724;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9897330403327942;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9979296326637268;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0338428020477295;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9939024448394777;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.996926248073578;
    }
  if(100<pt && pt<1000){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.9989827275276184;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.007128357887268;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.030803084373474;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9938271641731262;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9959100484848022;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9959058165550232;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9959058165550232;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9959100484848022;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9938271641731262;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.030803084373474;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.007128357887268;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9989827275276184;
    }
  return scale_factor;
}

//IDIso Scale Factors(Electrons): 2018
double VLLAna::getSFElectronUL18_IDIso(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0568181276321411;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0353130102157593;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.0157480239868164;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.970703125;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9808428883552552;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0078431367874146;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0016286373138428;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0356472730636597;
  }

  if(20<pt && pt<35){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0014164447784424;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9870466589927672;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9584487676620485;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.967346966266632;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9728997349739076;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9650349617004396;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9750983119010924;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9886845946311952;
  }

  if(35<pt && pt<50){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 0.9950980544090272;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9861271381378174;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9647887349128724;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9686775207519532;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9732868671417236;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9668246507644652;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9802784323692322;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9852579832077026;
  }

  if(50<pt && pt<100){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 0.9918032884597778;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9865319728851318;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.966216206550598;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9709821343421936;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9732142686843872;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9693877696990968;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9797979593276978;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9801169633865356;
  }

  if(100<pt && pt<1000){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9978237152099608;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.0021858215332031;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.990217387676239;
    if(0.0<eta && eta<0.8) 
      scale_factor = 1.0054525136947632;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0054824352264404;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.99672132730484;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9854586124420166;
  }
  return scale_factor;
}

///////////////////////////////////////////////////////
//            2017 Electron ID&ISO&Reco SFs          //
///////////////////////////////////////////////////////
//RecoScaleFactors(Electrons): 2017
double VLLAna::getSFElectronUL17_Reco(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.0136841535568235;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0126183032989502;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.092337965965271;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 1.0033222436904907;
    if(-1.0<eta && eta<0.0) 
      scale_factor = 1.047619104385376;
    if(0.0<eta && eta<1.0) 
      scale_factor = 1.047619104385376;
    if(1.0<eta && eta<1.444) 
      scale_factor = 1.0033222436904907;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.092337965965271;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0126183032989502;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.0136841535568235;
  }
  if(20<pt && pt<45){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.9814624190330504;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.986652970314026;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9261430501937866;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9803516268730164;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9866666793823242;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9876543283462524;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9886481165885924;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9917355179786682;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.98221755027771;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.978723406791687;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9876543283462524;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.986652970314026;
    }
    
  if(45<pt && pt<75){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.9836233258247375;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9867346882820128;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9574015140533448;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9825819730758668;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9887983798980712;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.988752543926239;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9897540807724;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9938398599624634;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.98343688249588;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.9817400574684144;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9897750616073608;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9867346882820128;
    }

  if(75<pt && pt<100){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.9764344096183776;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.004094123840332;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0240436792373655;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9887640476226808;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.998976469039917;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.984725058078766;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.984725058078766;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.998976469039917;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9887640476226808;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0240436792373655;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.004094123840332;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9764344096183776;
    }
  if(100<pt && pt<500){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.978830635547638;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9878296256065368;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.04966139793396;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.988752543926239;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9949341416358948;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 1.0010162591934204;
    if(0.0<eta && eta<0.5) 
      scale_factor = 1.0010162591934204;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9949341416358948;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.988752543926239;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.04966139793396;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9878296256065368;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.978830635547638;
    }
  return scale_factor;
}

//IDIso Scale Factors(Electron): 2017
double VLLAna::getSFElectronUL17_IDIso(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0641509294509888;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0369181632995603;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.0371747016906738;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9908088445663452;
    if(0.0<eta && eta<0.8) 
      scale_factor = 1.012635350227356;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0055969953536987;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0367279052734375;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.117424249649048;
  }

  if(20<pt && pt<35){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0115773677825928;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9868593811988832;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9860917925834656;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9647218585014344;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.973045825958252;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9929676651954652;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.990728497505188;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9971264600753784;
  }

  if(35<pt && pt<50){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9929824471473694;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9799764156341552;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9698376059532166;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9768250584602356;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9834123253822328;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9906213283538818;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.011264085769653;
  }

  if(50<pt && pt<100){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 0.9988123774528505;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.993228018283844;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.979706883430481;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9721293449401855;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9788418412208556;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9830124378204346;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9954648613929749;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0035587549209597;
  }

  if(100<pt && pt<1000){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 0.9966443181037904;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0044004917144775;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.0120482444763184;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.993513524532318;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9967532753944396;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.012061357498169;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0032858848571775;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0055803060531616;
  }
  return scale_factor;
}



///////////////////////////////////////////////////////
//            2016preVFP Electron ID&ISO&Reco SFs    //
///////////////////////////////////////////////////////
//RecoScaleFactors(Electrons): 2016 preVFP
double VLLAna::getSFElectronUL16preVFP_Reco(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.0138888359069824;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9903433322906494;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.206501007080078;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 1.0175824165344238;
    if(-1.0<eta && eta<0.0) 
      scale_factor = 1.055690050125122;
    if(0.0<eta && eta<1.0) 
      scale_factor = 1.055690050125122;
    if(1.0<eta && eta<1.444) 
      scale_factor = 1.0175824165344238;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.206501007080078;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9903433322906494;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.0138888359069824;
  }
  if(20<pt && pt<45){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.996791422367096;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9927234649658204;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9575971961021424;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9855967164039612;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9794450402259828;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9752577543258668;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9865979552268982;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9877049326896667;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.989722490310669;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.971563994884491;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9938016533851624;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.0;
    }
    
  if(45<pt && pt<75){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.9915878176689148;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9927685856819152;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9621621370315552;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9867211580276488;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9816138744354248;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9795291423797609;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9877175092697144;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9877800345420836;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9887754917144777;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.9751351475715636;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9907597303390504;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9925373196601868;
    }

  if(75<pt && pt<100){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 0.9883720874786376;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9846311211586;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0121278762817385;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9827761054039;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9766022562980652;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9877426028251648;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9877426028251648;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9766022562980652;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9827761054039;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0121278762817385;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9846311211586;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9883720874786376;
    }
  if(100<pt && pt<1000){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.009584665298462;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0163766145706177;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0143805742263794;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9798183441162108;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9848637580871582;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9898682832717896;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.9898682832717896;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9848637580871582;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9798183441162108;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0143805742263794;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0163766145706177;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.009584665298462;
    }
  return scale_factor;
}

//IDIso Scale Factors(Electrons): 2016 preVFP
double VLLAna::getSFElectronUL16preVFP_IDIso(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0819367170333862;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.065743923187256;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.038673996925354;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9839285612106324;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9912126660346984;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0694184303283691;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor =1.0352113246917725;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0833333730697632;
  }

  if(20<pt && pt<35){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0307917594909668;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0176870822906494;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9957447052001952;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9723374843597412;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9821428656578064;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0028570890426636;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.009602189064026;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0203487873077393;
  }

  if(35<pt && pt<50){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0152283906936646;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0120337009429932;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.990407645702362;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9692671298980712;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9799528121948242;
    if(0.8<eta && eta<1.444) 
      scale_factor =0.9927797913551332 ;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0096385478973389;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0114504098892212;
  }

  if(50<pt && pt<100){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0024067163467407;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.004629611968994;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9896193742752076;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9693182110786438;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9773242473602296;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9884659647941588;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0092915296554563;
    if(2.0<eta && eta<2.4) 
      scale_factor =1.0048367977142334 ;
  }

  if(100<pt && pt<1000){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0160366296768188;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0245535373687744;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.0022321939468384;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9889135360717772;
    if(0.0<eta && eta<0.8) 
      scale_factor = 1.0011111497879028;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.011135816574097;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9911012053489684;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0346020460128784;
  }
  return scale_factor;
}


///////////////////////////////////////////////////////
//       2016postVFP Electron ID&ISO&Reco SFs        //
///////////////////////////////////////////////////////
//RecoScaleFactors(Electrons): 2016_postVFP
double VLLAna::getSFElectronUL16postVFP_Reco(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.0152403116226196;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.990312159061432;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.1295620203018188;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9585605263710022;
    if(-1.0<eta && eta<0.0) 
      scale_factor = 1.0240384340286257;
    if(0.0<eta && eta<1.0) 
      scale_factor = 1.0240384340286257;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9585605263710022;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.1295620203018188;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.990312159061432;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.0152403116226196;
  }
  if(20<pt && pt<45){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.0353591442108154;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9926931262016296;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.989461362361908;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9876416325569152;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9856704473495485;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.983589768409729;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.983589768409729;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9856997132301332;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9845995903015136;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.9763872623443604;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.98860102891922;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.991416335105896;
    }
    
  if(45<pt && pt<75){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.020474195480347;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9896265268325806;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9596510529518129;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9867346882820128;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.98578679561615;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.9857434034347534;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.984725058078766;
    if(0.5<eta && eta<1.0) 
      scale_factor = 0.9868020415306092;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9857288599014282;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.9589632749557496;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9886831045150756;
    if(2.0<eta && eta<5.0) 
      scale_factor = 0.9915878176689148;
    }

  if(75<pt && pt<100){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.0;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9732785224914552;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.991256833076477;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9817444086074828;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9766970872879028;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.976673424243927;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.976673424243927;
    if(0.5<eta && eta<1.0) 
      scale_factor =0.9766970872879028 ;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9817444086074828;
    if(1.444<eta && eta<1.566) 
      scale_factor = 0.991256833076477;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9732785224914552;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.0;
    }
  if(100<pt && pt<1000){
    if(-5.0<eta && eta<-2.1) 
      scale_factor = 1.0105262994766235;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9969356656074524;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 0.9988986849784852;
    if(-1.444<eta && eta<-1.0) 
      scale_factor = 0.9919354915618896;
    if(-1.0<eta && eta<-0.5) 
      scale_factor = 0.9909273982048036;
    if(-0.5<eta && eta<0.0) 
      scale_factor = 0.986868679523468;
    if(0.0<eta && eta<0.5) 
      scale_factor = 0.986868679523468;
    if(0.5<eta && eta<1.0) 
      scale_factor =0.9909273982048036 ;
    if(1.0<eta && eta<1.444) 
      scale_factor = 0.9919354915618896;
    if(1.444<eta && eta<1.566) 
      scale_factor =0.9988986849784852 ;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9969356656074524;
    if(2.0<eta && eta<5.0) 
      scale_factor = 1.0105262994766235;
    }
  return scale_factor;
}

//IDIso Scale Factor(Electrons): 2016_postVFP
double VLLAna::getSFElectronUL16postVFP_IDIso(float pt, float eta){
  double scale_factor = 1.0;
  
  if(10<pt && pt<20){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0397112369537354;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0204429626464844;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.003610134124756;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9584055542945862;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9655172228813172;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 1.0242633819580078;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.022687554359436;
  }

  if(20<pt && pt<35){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.015895962715149;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 0.9973154067993164;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9831932783126832;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9647696614265442;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.98505437374115;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9858956336975098;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9878048896789552;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0114285945892334;
  }

  if(35<pt && pt<50){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.008838415145874;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0011975765228271;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.982206404209137;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9731621742248536;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9859319925308228;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9880383014678956;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9952152967453004;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9962406158447266;
  }

  if(50<pt && pt<100){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0036144256591797;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.0034762620925903;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 0.9828571677207948;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 0.9719416499137878;
    if(0.0<eta && eta<0.8) 
      scale_factor = 0.9830890893936156;
    if(0.8<eta && eta<1.444) 
      scale_factor = 0.9862385392189026;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.99190753698349;
    if(2.0<eta && eta<2.4) 
      scale_factor = 0.9880810379981996;
  }

  if(100<pt && pt<1000){
    if(-2.4<eta && eta<-2.1) 
      scale_factor = 1.0270880460739136;
    if(-2.1<eta && eta<-1.566) 
      scale_factor = 1.024608492851257;
    if(-1.566<eta && eta<-1.444) 
      scale_factor = 1.0;
    if(-1.444<eta && eta<-0.8) 
      scale_factor = 1.0011049509048462;
    if(-0.8<eta && eta<0.0) 
      scale_factor = 1.0032930374145508;
    if(0.0<eta && eta<0.8) 
      scale_factor = 1.0099338293075562;
    if(0.8<eta && eta<1.444) 
      scale_factor = 1.0100446939468384;
    if(1.444<eta && eta<1.566) 
      scale_factor = 1.0;
    if(1.566<eta && eta<2.0) 
      scale_factor = 0.9945295453071594;
    if(2.0<eta && eta<2.4) 
      scale_factor = 1.0067644119262695;
  }
  return scale_factor;
}

