// Set some variables to use as part of transitions
float currentTime = 1945;
float endOfDay = 2399;
float clicksPerMinute = 10;
float timeInc = 1 / clicksPerMinute;

// Remember, we're using 100 intervals per hour rather than 60 so quarter-to-six in the morning is 500 plus a three-quarters of 100 = 575
unsigned int dawnStart = 575;
unsigned int sunsetStart = 1800;
unsigned int duskStart = 1950;
unsigned int shopOneOpens = 900;
unsigned int shopOneCloses = 1750;
unsigned int shopOneLightsOut = 2000;
unsigned int shopTwoOpens = 1100;
unsigned int shopTwoCloses = 2100;
unsigned int windowLightsOn = 1800;
unsigned int windowLightsOff = 2300;
