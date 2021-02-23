bool isDawnFading = false;
bool isSunsetFading = false;
bool isDuskFading = false;
bool isThunder = false;
bool isThundering = false;
unsigned int thunderSequenceSelection;

unsigned int fadeCounter = 0;
unsigned int thunderCount = 0;

void setup() {
  // put your setup code here, to run once:
  while(!Serial){
    delay(100);
  }
  Serial.begin(9600);
  randomSeed(analogRead(0));

  // Sets the number of 8-bit registers that are used.
  ShiftPWM.SetAmountOfRegisters(numRegisters);

  // SetPinGrouping allows flexibility in LED setup. 
  // If your LED's are connected like this: RRRRGGGGBBBBRRRRGGGGBBBB, use SetPinGrouping(4).
  ShiftPWM.SetPinGrouping(1); //This is the default, but I added here to demonstrate how to use the funtion
  
  ShiftPWM.Start(pwmFrequency,maxBrightness);

  ShiftPWM.SetAll(0);

  for (int a = 0; a < numSkyLEDs; a++) {
    ShiftPWM.SetRGB(skyLEDs[a],nightSkyRGB[0],nightSkyRGB[1],nightSkyRGB[2]);
  }
  ShiftPWM.SetRGB(sunLED,moonRGB[0],moonRGB[1],moonRGB[2]);
  ShiftPWM.SetRGB(lightningLED,0,0,0);

}
