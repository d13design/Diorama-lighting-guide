int neon(int led, int count){
  if(count > 10){
    int v = random(50);
    int y = 255;
    if(v == 0) y = 0.5;
    if(v == 1) y = 0;
    if(y != 255){
      ShiftPWM.SetRGB(led,y*neonColour[0],y*neonColour[1],y*neonColour[2]);
    }else{
      ShiftPWM.SetRGB(led,neonColour[0],neonColour[1],neonColour[2]);
    }
    count = 0;
  }else{
    ShiftPWM.SetRGB(led,neonColour[0],neonColour[1],neonColour[2]);
    count++;
  }
  return count;
}
