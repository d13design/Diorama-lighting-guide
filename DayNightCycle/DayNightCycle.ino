// Clock and data pins are pins from the hardware SPI, you cannot choose them yourself.
// Data pin is MOSI (Uno and earlier: 11, Leonardo: ICSP 4, Mega: 51, Teensy 2.0: 2, Teensy 2.0++: 22) 
// Clock pin is SCK (Uno and earlier: 13, Leonardo: ICSP 3, Mega: 52, Teensy 2.0: 1, Teensy 2.0++: 21)
const int ShiftPWM_latchPin=8;

// If your LED's turn on if the pin is low, set this to true, otherwise set it to false.
const bool ShiftPWM_invertOutputs = false;

// You can enable the option below to shift the PWM phase of each shift register by 8 compared to the previous.
// This will slightly increase the interrupt load, but will prevent all PWM signals from becoming high at the same time.
// This will be a bit easier on your power supply, because the current peaks are distributed.
const bool ShiftPWM_balanceLoad = true;

#include <SPI.h>
#include <ShiftPWM.h>

// Set some core properties
unsigned char maxBrightness = 255;
unsigned char pwmFrequency = 75;
unsigned int numRegisters = 2;
unsigned int numOutputs = numRegisters * 8;
unsigned int numRGBLeds = numRegisters * 8 / 3;

// Define which LEDs we'll use for which purpose
unsigned int sunLED = 0;
unsigned int skyLEDs[] = {1,2};
unsigned int numSkyLEDs = 2;

// Set some variables to use as part of transitions
float currentTime = 500;
float endOfDay = 2399;
float clicksPerMinute = 1;
float timeInc = 1 / clicksPerMinute;

// Remember, we're using 100 intervals per hour rather than 60 so quarter-to-six in the morning is 500 plus a three-quarters of 100 = 575
unsigned int dawnStart = 575;
unsigned int sunsetStart = 1800;
unsigned int duskStart = 1950;

// Colours are defined as arrays in the form of {R, G, B}

// Colour mode: Clear Sky
unsigned int nightSkyRGB[] = {0,0,15};
unsigned int daySkyRGB[] = {250,250,180};
unsigned int sunsetSkyRGB[] = {250,20,20};
unsigned int moonRGB[] = {30,30,120};
unsigned int sunRGB[] = {220,230,255};
unsigned int sunsetSunRGB[] = {250,60,30};

// Define timings of atmospheric fades - 100 would be equal to an hour
unsigned int dawnFadeRange = 100*clicksPerMinute;
unsigned int sunsetFadeRange = 100*clicksPerMinute;
unsigned int duskFadeRange = 50*clicksPerMinute;

bool isDawnFading = false;
bool isSunsetFading = false;
bool isDuskFading = false;

unsigned int fadeCounter = 0;

void setup() {
  // put your setup code here, to run once:
  while(!Serial){
    delay(100);
  }
  Serial.begin(9600);

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

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(int(currentTime));

  if(int(currentTime) == dawnStart) isDawnFading = true;
  if(int(currentTime) == sunsetStart) isSunsetFading = true;
  if(int(currentTime) == duskStart) isDuskFading = true;

  // Fade types - 1: dawn, 2: sunset, 3: dusk
  if(isDawnFading) fade(1, nightSkyRGB, daySkyRGB, moonRGB, sunRGB, dawnFadeRange);
  if(isSunsetFading) fade(2, daySkyRGB, sunsetSkyRGB, sunRGB, sunsetSunRGB, sunsetFadeRange);
  if(isDuskFading) fade(3, sunsetSkyRGB, nightSkyRGB, sunsetSunRGB, moonRGB, duskFadeRange);

  if(currentTime + timeInc > endOfDay){
    currentTime = 0;
  }else{
    currentTime = currentTime + timeInc;
  }

  delay(30);

}


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
