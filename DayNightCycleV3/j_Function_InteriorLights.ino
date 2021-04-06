void interiorOn(int led, int mode){
  int r = 0;
  int g = 0;
  int b = 0;
  if(mode == 0){
    r = lightColour[0]; g = lightColour[1]; b = lightColour[2];
  }
  if(mode == 1){
    r = candleColour[0]; g = candleColour[1]; b = candleColour[2];
  }
  if(mode == 2){
    r = neonColour[0]; g = neonColour[1]; b = neonColour[2];
  }
  ShiftPWM.SetRGB(led,r,g,b);
}

void interiorOff(int led){
  ShiftPWM.SetRGB(led,0,0,0);
}
