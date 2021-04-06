// Colours are defined as arrays in the form of {R, G, B}

// Colour mode: Dark Alley
unsigned int nightSkyRGB[] = {30,30,60};
unsigned int daySkyRGB[] = {230,251,255};
unsigned int sunsetSkyRGB[] = {184, 73, 61};
unsigned int moonRGB[] = {15,15,30};
unsigned int sunRGB[] = {255,255,161};
unsigned int sunsetSunRGB[] = {207, 154, 64};

// Define timings of atmospheric fades - 100 would be equal to an hour
unsigned int dawnFadeRange = 100*clicksPerMinute;
unsigned int sunsetFadeRange = 100*clicksPerMinute;
unsigned int duskFadeRange = 100*clicksPerMinute;

// Define the chance of some other atmospheric effects - think of these as a dice roll with a 10 sided dice, get the number or lower to get the effect
unsigned int chanceOfThunder = 6;

// Define the chance of magic spell explosions firing - think of this as a dice roll with as many sides as the number you define here, if you get a 1 then a spell will fire
unsigned int chanceOfSpells = 950;

// Define some core colours to use for the different interior light modes
unsigned int lightColour[] {60,22,2};
unsigned int candleColour[] {148, 107, 18};
unsigned int neonColour[] {220,220,255};

// The intensity of the candle flicker - we'll vary the red and green of the led by this numnber, and the blue by half of this number
unsigned int candleIntensity = 30;
