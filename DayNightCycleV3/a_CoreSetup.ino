// Set some core properties
unsigned char maxBrightness = 255;
unsigned char pwmFrequency = 75;
unsigned int numRegisters = 6;
unsigned int numOutputs = numRegisters * 8;
unsigned int numRGBLeds = 15; //numRegisters * 8 / 3;

// Define which LEDs we'll use for which purpose
unsigned int sunLED = 0;                // LED for the sun & moon
unsigned int skyLEDs[] = {1,2};         // LEDs for sky colours
unsigned int numSkyLEDs = 2;            // How many sky LEDs do we have?
unsigned int lightningLED = 3;          // LED for lightning effects
unsigned int magicSpellLED = 11;        // LED for the magic spell effects

// Define the LEDs to use for shop and window lights - defined as an array:
//    0: LED number
//    1: Mode - 0 = standard on/off, 1 = candlelight, 2 = neon lights
//    2: Counter - 0
unsigned int shopOneWindowOneLED[] = {5,1,0};   // LED for the first shop - window 1
unsigned int shopOneWindowTwoLED[] = {7,1,0};   // LED for the first shop - window 2
unsigned int shopOneDoorLED[] = {13,1,0};        // LED for the first shop - doorway
unsigned int shopTwoWindowLED[] = {10,1,0};      // LED for the second shop - window
unsigned int shopTwoDoorLED[] = {13,1,0};        // LED for the second shop - doorway
unsigned int flatOneWindowOneLED[] = {4,1,0};   // LED for the first upstairs room - left side
unsigned int flatOneWindowTwoLED[] = {6,1,0};  // LED for the first upstairs room - right side
unsigned int flatTwoWindowOneLED[] = {12,1,0};  // LED for the second upstairs room - window
unsigned int flatThreeWindowOneLED[] = {8,1,0};// LED for the third upstairs room - window 1
unsigned int flatThreeWindowTwoLED[] = {9,1,0};// LED for the third upstairs room - window 2
