// Set some core properties
unsigned char maxBrightness = 255;
unsigned char pwmFrequency = 75;
unsigned int numRegisters = 5;
unsigned int numOutputs = numRegisters * 8;
unsigned int numRGBLeds = numRegisters * 8 / 3;

// Define which LEDs we'll use for which purpose
unsigned int sunLED = 0;
unsigned int skyLEDs[] = {1,2};
unsigned int numSkyLEDs = 2;
unsigned int lightningLED = 3;
unsigned int shopOneWindowOneLED = 4;
unsigned int shopOneWindowTwoLED = 5;
unsigned int shopOneDoorLED = 6;
unsigned int shopTwoWindowLED = 7;
unsigned int shopTwoDoorLED = 8;
unsigned int flatOneWindowOneLED = 9;
unsigned int flatOneWindowTwoLED = 10;
unsigned int flatTwoWindowOneLED = 11;
unsigned int flatThreeWindowOneLED = 12;
unsigned int flatThreeWindowTwoLED = 13;
