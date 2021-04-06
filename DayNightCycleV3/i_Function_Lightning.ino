void lightning(){
  int val = 0;
  if(thunderSequenceSelection == 1) val = lightningSequenceOne[thunderCount]*255;
  if(thunderSequenceSelection == 2) val = lightningSequenceTwo[thunderCount]*255;
  if(thunderSequenceSelection == 3) val = lightningSequenceThree[thunderCount]*255;
  if(thunderSequenceSelection == 4) val = lightningSequenceFour[thunderCount]*255;
  if(thunderSequenceSelection == 5) val = lightningSequenceFive[thunderCount]*255;
  ShiftPWM.SetRGB(lightningLED,val,val,val);
  if(thunderCount < lenthOfLightning){
    thunderCount++;
  }else{
    thunderCount = 0;
    isThundering = false;
    ShiftPWM.SetRGB(lightningLED,0,0,0);
  }
}
