void fade(int type, int startRGB[], int endRGB[], int sunStartRGB[], int sunEndRGB[], int range){

  float skyR, skyG, skyB, sunR, sunG, sunB, i;

  // SKY
  if(endRGB[0] > startRGB[0]){
    i = float(endRGB[0]-startRGB[0]) / float(range);
  }else{
    i = (float(startRGB[0]-endRGB[0]) / float(range)) * -1;
  }
  skyR = float(startRGB[0]) + i*float(fadeCounter);

  if(endRGB[1] > startRGB[1]){
    i = float(endRGB[1]-startRGB[1]) / float(range);
  }else{
    i = (float(startRGB[1]-endRGB[1]) / float(range)) * -1;
  }
  skyG = float(startRGB[1]) + i*float(fadeCounter);

  if(endRGB[2] > startRGB[2]){
    i = float(endRGB[2]-startRGB[2]) / float(range);
  }else{
    i = (float(startRGB[2]-endRGB[2]) / float(range)) * -1;
  }
  skyB = float(startRGB[2]) + i*float(fadeCounter);

  // SUN
  if(sunEndRGB[0] > sunStartRGB[0]){
    i = float(sunEndRGB[0]-sunStartRGB[0]) / float(range);
  }else{
    i = (float(sunStartRGB[0]-sunEndRGB[0]) / float(range)) * -1;
  }
  sunR = float(sunStartRGB[0]) + i*float(fadeCounter);

  if(sunEndRGB[1] > sunStartRGB[1]){
    i = float(sunEndRGB[1]-sunStartRGB[1]) / float(range);
  }else{
    i = (float(sunStartRGB[1]-sunEndRGB[1]) / float(range)) * -1;
  }
  sunG = float(sunStartRGB[1]) + i*float(fadeCounter);

  if(sunEndRGB[2] > sunStartRGB[2]){
    i = float(sunEndRGB[2]-sunStartRGB[2]) / float(range);
  }else{
    i = (float(sunStartRGB[2]-sunEndRGB[2]) / float(range)) * -1;
  }
  sunB = float(sunStartRGB[2]) + i*float(fadeCounter);

  for (int a = 0; a < numSkyLEDs; a++) {
    ShiftPWM.SetRGB(skyLEDs[a],int(skyR),int(skyG),int(skyB));
  }
  ShiftPWM.SetRGB(sunLED,int(sunR),int(sunG),int(sunB));
  fadeCounter++;

  if(fadeCounter == range){
    switch(type){
    case 1:
      isDawnFading = false;
      break;
    case 2:
      isSunsetFading = false;
      break;
    case 3:
      isDuskFading = false;
      break;
    }
    fadeCounter = 0;
  }
  
}
