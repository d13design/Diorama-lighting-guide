void spellSetup(){
  int ri,gi,bi;
  int countUp = 0;
  
  // STEP 1
  if(spellStep1[3] > spellStep1[0]){
    ri = float(spellStep1[3]-spellStep1[0]) / float(spellStep1[6]);
  }else{
    ri = (float(spellStep1[0]-spellStep1[3]) / float(spellStep1[6])) * -1;
  }
  if(spellStep1[4] > spellStep1[1]){
    gi = float(spellStep1[4]-spellStep1[1]) / float(spellStep1[6]);
  }else{
    gi = (float(spellStep1[1]-spellStep1[4]) / float(spellStep1[6])) * -1;
  }
  if(spellStep1[5] > spellStep1[2]){
    bi = float(spellStep1[5]-spellStep1[2]) / float(spellStep1[6]);
  }else{
    bi = (float(spellStep1[2]-spellStep1[5]) / float(spellStep1[6])) * -1;
  }
  for(int v=0; v<spellStep1[6]; v++){
    spellR[countUp] = int(float(spellStep1[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep1[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep1[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep1[3];
  spellG[countUp] = spellStep1[4];
  spellB[countUp] = spellStep1[5];
  countUp++;

  // STEP 2
  if(spellStep2[3] > spellStep2[0]){
    ri = float(spellStep2[3]-spellStep2[0]) / float(spellStep2[6]);
  }else{
    ri = (float(spellStep2[0]-spellStep2[3]) / float(spellStep2[6])) * -1;
  }
  if(spellStep2[4] > spellStep2[1]){
    gi = float(spellStep2[4]-spellStep2[1]) / float(spellStep2[6]);
  }else{
    gi = (float(spellStep2[1]-spellStep2[4]) / float(spellStep2[6])) * -1;
  }
  if(spellStep2[5] > spellStep2[2]){
    bi = float(spellStep2[5]-spellStep2[2]) / float(spellStep2[6]);
  }else{
    bi = (float(spellStep2[2]-spellStep2[5]) / float(spellStep2[6])) * -1;
  }
  for(int v=0; v<spellStep2[6]; v++){
    spellR[countUp] = int(float(spellStep2[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep2[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep2[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep2[3];
  spellG[countUp] = spellStep2[4];
  spellB[countUp] = spellStep2[5];
  countUp++;

  // STEP 3
  if(spellStep3[3] > spellStep3[0]){
    ri = float(spellStep3[3]-spellStep3[0]) / float(spellStep3[6]);
  }else{
    ri = (float(spellStep3[0]-spellStep3[3]) / float(spellStep3[6])) * -1;
  }
  if(spellStep3[4] > spellStep3[1]){
    gi = float(spellStep3[4]-spellStep3[1]) / float(spellStep3[6]);
  }else{
    gi = (float(spellStep3[1]-spellStep3[4]) / float(spellStep3[6])) * -1;
  }
  if(spellStep3[5] > spellStep3[2]){
    bi = float(spellStep3[5]-spellStep3[2]) / float(spellStep3[6]);
  }else{
    bi = (float(spellStep3[2]-spellStep3[5]) / float(spellStep3[6])) * -1;
  }
  for(int v=0; v<spellStep3[6]; v++){
    spellR[countUp] = int(float(spellStep3[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep3[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep3[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep3[3];
  spellG[countUp] = spellStep3[4];
  spellB[countUp] = spellStep3[5];
  countUp++;

  // STEP 4
  if(spellStep4[3] > spellStep4[0]){
    ri = float(spellStep4[3]-spellStep4[0]) / float(spellStep4[6]);
  }else{
    ri = (float(spellStep4[0]-spellStep4[3]) / float(spellStep4[6])) * -1;
  }
  if(spellStep4[4] > spellStep4[1]){
    gi = float(spellStep4[4]-spellStep4[1]) / float(spellStep4[6]);
  }else{
    gi = (float(spellStep4[1]-spellStep4[4]) / float(spellStep4[6])) * -1;
  }
  if(spellStep4[5] > spellStep4[2]){
    bi = float(spellStep4[5]-spellStep4[2]) / float(spellStep4[6]);
  }else{
    bi = (float(spellStep4[2]-spellStep4[5]) / float(spellStep4[6])) * -1;
  }
  for(int v=0; v<spellStep4[6]; v++){
    spellR[countUp] = int(float(spellStep4[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep4[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep4[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep4[3];
  spellG[countUp] = spellStep4[4];
  spellB[countUp] = spellStep4[5];
  countUp++;

  // STEP 5
  if(spellStep5[3] > spellStep5[0]){
    ri = float(spellStep5[3]-spellStep5[0]) / float(spellStep5[6]);
  }else{
    ri = (float(spellStep5[0]-spellStep5[3]) / float(spellStep5[6])) * -1;
  }
  if(spellStep5[4] > spellStep5[1]){
    gi = float(spellStep5[4]-spellStep5[1]) / float(spellStep5[6]);
  }else{
    gi = (float(spellStep5[1]-spellStep5[4]) / float(spellStep5[6])) * -1;
  }
  if(spellStep5[5] > spellStep5[2]){
    bi = float(spellStep5[5]-spellStep5[2]) / float(spellStep5[6]);
  }else{
    bi = (float(spellStep5[2]-spellStep5[5]) / float(spellStep5[6])) * -1;
  }
  for(int v=0; v<spellStep5[6]; v++){
    spellR[countUp] = int(float(spellStep5[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep5[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep5[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep5[3];
  spellG[countUp] = spellStep5[4];
  spellB[countUp] = spellStep5[5];
  countUp++;

  // STEP 6
  if(spellStep6[3] > spellStep6[0]){
    ri = float(spellStep6[3]-spellStep6[0]) / float(spellStep6[6]);
  }else{
    ri = (float(spellStep6[0]-spellStep6[3]) / float(spellStep6[6])) * -1;
  }
  if(spellStep6[4] > spellStep6[1]){
    gi = float(spellStep6[4]-spellStep6[1]) / float(spellStep6[6]);
  }else{
    gi = (float(spellStep6[1]-spellStep6[4]) / float(spellStep6[6])) * -1;
  }
  if(spellStep6[5] > spellStep6[2]){
    bi = float(spellStep6[5]-spellStep6[2]) / float(spellStep6[6]);
  }else{
    bi = (float(spellStep6[2]-spellStep6[5]) / float(spellStep6[6])) * -1;
  }
  for(int v=0; v<spellStep6[6]; v++){
    spellR[countUp] = int(float(spellStep6[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep6[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep6[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep6[3];
  spellG[countUp] = spellStep6[4];
  spellB[countUp] = spellStep6[5];
  countUp++;

  // STEP 7
  if(spellStep7[3] > spellStep7[0]){
    ri = float(spellStep7[3]-spellStep7[0]) / float(spellStep7[6]);
  }else{
    ri = (float(spellStep7[0]-spellStep7[3]) / float(spellStep7[6])) * -1;
  }
  if(spellStep7[4] > spellStep7[1]){
    gi = float(spellStep7[4]-spellStep7[1]) / float(spellStep7[6]);
  }else{
    gi = (float(spellStep7[1]-spellStep7[4]) / float(spellStep7[6])) * -1;
  }
  if(spellStep7[5] > spellStep7[2]){
    bi = float(spellStep7[5]-spellStep7[2]) / float(spellStep7[6]);
  }else{
    bi = (float(spellStep7[2]-spellStep7[5]) / float(spellStep7[6])) * -1;
  }
  for(int v=0; v<spellStep7[6]; v++){
    spellR[countUp] = int(float(spellStep7[0]) + ri*float(v));
    spellG[countUp] = int(float(spellStep7[1]) + gi*float(v));
    spellB[countUp] = int(float(spellStep7[2]) + bi*float(v));
    countUp++;
  }
  spellR[countUp] = spellStep7[3];
  spellG[countUp] = spellStep7[4];
  spellB[countUp] = spellStep7[5];
  countUp++;
}



void spell2Setup(){
  int ri,gi,bi;
  int countUp = 0;
  
  // STEP 1
  if(spell2Step1[3] > spell2Step1[0]){
    ri = float(spell2Step1[3]-spell2Step1[0]) / float(spell2Step1[6]);
  }else{
    ri = (float(spell2Step1[0]-spell2Step1[3]) / float(spell2Step1[6])) * -1;
  }
  if(spell2Step1[4] > spell2Step1[1]){
    gi = float(spell2Step1[4]-spell2Step1[1]) / float(spell2Step1[6]);
  }else{
    gi = (float(spell2Step1[1]-spell2Step1[4]) / float(spell2Step1[6])) * -1;
  }
  if(spell2Step1[5] > spell2Step1[2]){
    bi = float(spell2Step1[5]-spell2Step1[2]) / float(spell2Step1[6]);
  }else{
    bi = (float(spell2Step1[2]-spell2Step1[5]) / float(spell2Step1[6])) * -1;
  }
  for(int v=0; v<spell2Step1[6]; v++){
    spell2R[countUp] = int(float(spell2Step1[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step1[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step1[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step1[3];
  spell2G[countUp] = spell2Step1[4];
  spell2B[countUp] = spell2Step1[5];
  countUp++;

  // STEP 2
  if(spell2Step2[3] > spell2Step2[0]){
    ri = float(spell2Step2[3]-spell2Step2[0]) / float(spell2Step2[6]);
  }else{
    ri = (float(spell2Step2[0]-spell2Step2[3]) / float(spell2Step2[6])) * -1;
  }
  if(spell2Step2[4] > spell2Step2[1]){
    gi = float(spell2Step2[4]-spell2Step2[1]) / float(spell2Step2[6]);
  }else{
    gi = (float(spell2Step2[1]-spell2Step2[4]) / float(spell2Step2[6])) * -1;
  }
  if(spell2Step2[5] > spell2Step2[2]){
    bi = float(spell2Step2[5]-spell2Step2[2]) / float(spell2Step2[6]);
  }else{
    bi = (float(spell2Step2[2]-spell2Step2[5]) / float(spell2Step2[6])) * -1;
  }
  for(int v=0; v<spell2Step2[6]; v++){
    spell2R[countUp] = int(float(spell2Step2[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step2[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step2[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step2[3];
  spell2G[countUp] = spell2Step2[4];
  spell2B[countUp] = spell2Step2[5];
  countUp++;

  // STEP 3
  if(spell2Step3[3] > spell2Step3[0]){
    ri = float(spell2Step3[3]-spell2Step3[0]) / float(spell2Step3[6]);
  }else{
    ri = (float(spell2Step3[0]-spell2Step3[3]) / float(spell2Step3[6])) * -1;
  }
  if(spell2Step3[4] > spell2Step3[1]){
    gi = float(spell2Step3[4]-spell2Step3[1]) / float(spell2Step3[6]);
  }else{
    gi = (float(spell2Step3[1]-spell2Step3[4]) / float(spell2Step3[6])) * -1;
  }
  if(spell2Step3[5] > spell2Step3[2]){
    bi = float(spell2Step3[5]-spell2Step3[2]) / float(spell2Step3[6]);
  }else{
    bi = (float(spell2Step3[2]-spell2Step3[5]) / float(spell2Step3[6])) * -1;
  }
  for(int v=0; v<spell2Step3[6]; v++){
    spell2R[countUp] = int(float(spell2Step3[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step3[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step3[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step3[3];
  spell2G[countUp] = spell2Step3[4];
  spell2B[countUp] = spell2Step3[5];
  countUp++;

  // STEP 4
  if(spell2Step4[3] > spell2Step4[0]){
    ri = float(spell2Step4[3]-spell2Step4[0]) / float(spell2Step4[6]);
  }else{
    ri = (float(spell2Step4[0]-spell2Step4[3]) / float(spell2Step4[6])) * -1;
  }
  if(spell2Step4[4] > spell2Step4[1]){
    gi = float(spell2Step4[4]-spell2Step4[1]) / float(spell2Step4[6]);
  }else{
    gi = (float(spell2Step4[1]-spell2Step4[4]) / float(spell2Step4[6])) * -1;
  }
  if(spell2Step4[5] > spell2Step4[2]){
    bi = float(spell2Step4[5]-spell2Step4[2]) / float(spell2Step4[6]);
  }else{
    bi = (float(spell2Step4[2]-spell2Step4[5]) / float(spell2Step4[6])) * -1;
  }
  for(int v=0; v<spell2Step4[6]; v++){
    spell2R[countUp] = int(float(spell2Step4[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step4[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step4[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step4[3];
  spell2G[countUp] = spell2Step4[4];
  spell2B[countUp] = spell2Step4[5];
  countUp++;

  // STEP 5
  if(spell2Step5[3] > spell2Step5[0]){
    ri = float(spell2Step5[3]-spell2Step5[0]) / float(spell2Step5[6]);
  }else{
    ri = (float(spell2Step5[0]-spell2Step5[3]) / float(spell2Step5[6])) * -1;
  }
  if(spell2Step5[4] > spell2Step5[1]){
    gi = float(spell2Step5[4]-spell2Step5[1]) / float(spell2Step5[6]);
  }else{
    gi = (float(spell2Step5[1]-spell2Step5[4]) / float(spell2Step5[6])) * -1;
  }
  if(spell2Step5[5] > spell2Step5[2]){
    bi = float(spell2Step5[5]-spell2Step5[2]) / float(spell2Step5[6]);
  }else{
    bi = (float(spell2Step5[2]-spell2Step5[5]) / float(spell2Step5[6])) * -1;
  }
  for(int v=0; v<spell2Step5[6]; v++){
    spell2R[countUp] = int(float(spell2Step5[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step5[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step5[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step5[3];
  spell2G[countUp] = spell2Step5[4];
  spell2B[countUp] = spell2Step5[5];
  countUp++;

  // STEP 6
  if(spell2Step6[3] > spell2Step6[0]){
    ri = float(spell2Step6[3]-spell2Step6[0]) / float(spell2Step6[6]);
  }else{
    ri = (float(spell2Step6[0]-spell2Step6[3]) / float(spell2Step6[6])) * -1;
  }
  if(spell2Step6[4] > spell2Step6[1]){
    gi = float(spell2Step6[4]-spell2Step6[1]) / float(spell2Step6[6]);
  }else{
    gi = (float(spell2Step6[1]-spell2Step6[4]) / float(spell2Step6[6])) * -1;
  }
  if(spell2Step6[5] > spell2Step6[2]){
    bi = float(spell2Step6[5]-spell2Step6[2]) / float(spell2Step6[6]);
  }else{
    bi = (float(spell2Step6[2]-spell2Step6[5]) / float(spell2Step6[6])) * -1;
  }
  for(int v=0; v<spell2Step6[6]; v++){
    spell2R[countUp] = int(float(spell2Step6[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step6[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step6[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step6[3];
  spell2G[countUp] = spell2Step6[4];
  spell2B[countUp] = spell2Step6[5];
  countUp++;

  // STEP 7
  if(spell2Step7[3] > spell2Step7[0]){
    ri = float(spell2Step7[3]-spell2Step7[0]) / float(spell2Step7[6]);
  }else{
    ri = (float(spell2Step7[0]-spell2Step7[3]) / float(spell2Step7[6])) * -1;
  }
  if(spell2Step7[4] > spell2Step7[1]){
    gi = float(spell2Step7[4]-spell2Step7[1]) / float(spell2Step7[6]);
  }else{
    gi = (float(spell2Step7[1]-spell2Step7[4]) / float(spell2Step7[6])) * -1;
  }
  if(spell2Step7[5] > spell2Step7[2]){
    bi = float(spell2Step7[5]-spell2Step7[2]) / float(spell2Step7[6]);
  }else{
    bi = (float(spell2Step7[2]-spell2Step7[5]) / float(spell2Step7[6])) * -1;
  }
  for(int v=0; v<spell2Step7[6]; v++){
    spell2R[countUp] = int(float(spell2Step7[0]) + ri*float(v));
    spell2G[countUp] = int(float(spell2Step7[1]) + gi*float(v));
    spell2B[countUp] = int(float(spell2Step7[2]) + bi*float(v));
    countUp++;
  }
  spell2R[countUp] = spell2Step7[3];
  spell2G[countUp] = spell2Step7[4];
  spell2B[countUp] = spell2Step7[5];
  countUp++;

}



void spell(){
  if(spellType == 0) ShiftPWM.SetRGB(magicSpellLED,spellR[spellCount],spellG[spellCount],spellB[spellCount]);
  if(spellType == 1) ShiftPWM.SetRGB(magicSpellLED,spell2R[spellCount],spell2G[spellCount],spell2B[spellCount]);
  if(spellCount == lengthOfSpell){
    spellCount = 0;
    spelling = false;
    ShiftPWM.SetRGB(magicSpellLED,0,0,0);
  }else{
    spellCount++;
  }
}
