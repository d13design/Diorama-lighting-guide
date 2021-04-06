// // Each phase of the spell animation is defined as START_COLOUR / END_COLOUR / NUMBER_OF_STEPS
// animationStep[] = {startR, startG, startB,   endR, endG, endB,   steps}
unsigned int spellStep1[] = {0,0,0,         255,5,255,      70};
unsigned int spellStep2[] = {255,5,255,     0,0,0,          5};
unsigned int spellStep3[] = {0,0,0,         255,255,255,    2};
unsigned int spellStep4[] = {255,255,255,   0,0,0,          2};
unsigned int spellStep5[] = {0,0,0,         0,255,30,       2};
unsigned int spellStep6[] = {0,255,30,      0,255,180,      20};
unsigned int spellStep7[] = {0,255,30,      0,0,0,          20};


unsigned int spell2Step1[] = {0,0,0,         255,5,10,       70};
unsigned int spell2Step2[] = {255,5,10,      0,0,0,          5};
unsigned int spell2Step3[] = {0,0,0,         0,0,255,        2};
unsigned int spell2Step4[] = {0,0,255,       0,0,0,          2};
unsigned int spell2Step5[] = {0,0,0,         0,255,10,       2};
unsigned int spell2Step6[] = {0,255,10,      255,30,50,      20};
unsigned int spell2Step7[] = {255,30,50,     0,0,0,          20};

const int lengthOfSpell = 141;

bool spelling = false;

unsigned int spellR[lengthOfSpell];
unsigned int spellG[lengthOfSpell];
unsigned int spellB[lengthOfSpell];

unsigned int spell2R[lengthOfSpell];
unsigned int spell2G[lengthOfSpell];
unsigned int spell2B[lengthOfSpell];
