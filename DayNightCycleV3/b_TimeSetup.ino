// Set some variables to use as part of transitions
float currentTime = 500;
float endOfDay = 2399;
float clicksPerMinute = 10;
float timeInc = 1 / clicksPerMinute;

// Remember, we're using 100 intervals per hour rather than 60 so quarter-to-six in the morning is 500 plus a three-quarters of 100 = 575
unsigned int dawnStart = 575;
unsigned int sunsetStart = 1800;
unsigned int duskStart = 1950;
unsigned int shopOneOpens = 900;
unsigned int shopOneCloses = 1800;
unsigned int shopTwoOpens = 950;
unsigned int shopTwoCloses = 1900;
unsigned int windowsOneLightsOn = 1100;
unsigned int windowsOneLightsOff = 2250;
unsigned int windowsTwoLightsOn = 1100;
unsigned int windowsTwoLightsOff = 2260;
unsigned int windowsThreeLightsOn = 1170;
unsigned int windowsThreeLightsOff = 2280;
