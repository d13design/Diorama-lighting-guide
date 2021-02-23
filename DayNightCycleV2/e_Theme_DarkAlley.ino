// Colours are defined as arrays in the form of {R, G, B}

// Colour mode: Dark Alley
unsigned int nightSkyRGB[] = {0,0,5};
unsigned int daySkyRGB[] = {20,15,10};
unsigned int sunsetSkyRGB[] = {20,15,10};
unsigned int moonRGB[] = {0,0,0};
unsigned int sunRGB[] = {10,10,0};
unsigned int sunsetSunRGB[] = {10,10,0};

// Define timings of atmospheric fades - 100 would be equal to an hour
unsigned int dawnFadeRange = 100*clicksPerMinute;
unsigned int sunsetFadeRange = 100*clicksPerMinute;
unsigned int duskFadeRange = 50*clicksPerMinute;

// Define the chance of some other atmospheric effects - thing of these as a dice roll with a 10 sided dice, get the number or lower to get the effect
unsigned int chanceOfThunder = 6;
