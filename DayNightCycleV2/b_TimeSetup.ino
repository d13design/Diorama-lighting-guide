// Set some variables to use as part of transitions
float currentTime = 450;
float endOfDay = 2399;
float clicksPerMinute = 4;
float timeInc = 1 / clicksPerMinute;

// Remember, we're using 100 intervals per hour rather than 60 so quarter-to-six in the morning is 500 plus a three-quarters of 100 = 575
unsigned int dawnStart = 575;
unsigned int sunsetStart = 1800;
unsigned int duskStart = 1950;
