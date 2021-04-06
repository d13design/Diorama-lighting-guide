void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(int(currentTime));

  if(int(currentTime) == dawnStart){
    // Intialise a dawn fade
    isDawnFading = true;
    // Reset thunder
    isThunder = false;
  }
  
  if(int(currentTime) == sunsetStart){
    // Intialise a sunset fade
    isSunsetFading = true;
  }
  
  if(int(currentTime) == duskStart){
    // Intialise a dusk fade
    isDuskFading = true;
    // Will it thunder tonight? Let's roll the dice...
    if(random(10) <= chanceOfThunder && chanceOfThunder != 0){
      isThunder = true;
    }else{
      isThunder = false;
    }
  }

  // Shall we switch on Shop One's lights?
  if(int(currentTime) == shopOneOpens){
    interiorOn(shopOneWindowOneLED[0],shopOneWindowOneLED[1]);
    interiorOn(shopOneWindowTwoLED[0],shopOneWindowTwoLED[1]);
    //interiorOn(shopOneDoorLED[0],shopOneDoorLED[1]);
  }
  // Shall we switch off Shop One's lights?
  if(int(currentTime) == shopOneCloses){
    interiorOff(shopOneWindowOneLED[0]);
    interiorOff(shopOneWindowTwoLED[0]);
    //interiorOff(shopOneDoorLED[0]);
  }

  // Shall we switch on Shop Two's lights?
  if(int(currentTime) == shopTwoOpens){
    interiorOn(shopTwoWindowLED[0],shopTwoWindowLED[1]);
    //interiorOn(shopTwoDoorLED[0],shopTwoDoorLED[1]);
  }
  // Shall we switch off Shop One's lights?
  if(int(currentTime) == shopTwoCloses){
    interiorOff(shopTwoWindowLED[0]);
    //interiorOff(shopTwoDoorLED[0]);
  }

  // Shall we switch the upstairs lights on?
  if(int(currentTime) == windowsOneLightsOn){
    interiorOn(flatOneWindowOneLED[0],flatOneWindowOneLED[1]);
    interiorOn(flatOneWindowTwoLED[0],flatOneWindowTwoLED[1]);
  }
  // Shall we switch the upstairs lights off?
  if(int(currentTime) == windowsOneLightsOff){
    interiorOff(flatOneWindowOneLED[0]);
    interiorOff(flatOneWindowTwoLED[0]);
  }
  if(int(currentTime) == windowsTwoLightsOn){
    interiorOn(flatTwoWindowOneLED[0],flatTwoWindowOneLED[1]);
  }
  // Shall we switch the upstairs lights off?
  if(int(currentTime) == windowsTwoLightsOff){
    interiorOff(flatTwoWindowOneLED[0]);
  }
  if(int(currentTime) == windowsThreeLightsOn){
    interiorOn(flatThreeWindowOneLED[0],flatThreeWindowOneLED[1]);
    interiorOn(flatThreeWindowTwoLED[0],flatThreeWindowTwoLED[1]);
  }
  // Shall we switch the upstairs lights off?
  if(int(currentTime) == windowsThreeLightsOff){
    interiorOff(flatThreeWindowOneLED[0]);
    interiorOff(flatThreeWindowTwoLED[0]);
  }

  // Have we got any candles or neon lights? If so, make them flicker...
  if(int(currentTime) > shopOneOpens && int(currentTime) < shopOneCloses){
    // Candles...
    if(shopOneWindowOneLED[1] == 1) shopOneWindowOneLED[2] = candle(shopOneWindowOneLED[0],shopOneWindowOneLED[2]);
    if(shopOneWindowTwoLED[1] == 1) shopOneWindowTwoLED[2] = candle(shopOneWindowTwoLED[0],shopOneWindowTwoLED[2]);
    //if(shopOneDoorLED[1] == 1) shopOneDoorLED[2] = candle(shopOneDoorLED[0],shopOneDoorLED[2]);
    // Neons...
    if(shopOneWindowOneLED[1] == 2) shopOneWindowOneLED[2] = neon(shopOneWindowOneLED[0],shopOneWindowOneLED[2]);
    if(shopOneWindowTwoLED[1] == 2) shopOneWindowTwoLED[2] = neon(shopOneWindowTwoLED[0],shopOneWindowTwoLED[2]);
    //if(shopOneDoorLED[1] == 2) shopOneDoorLED[2] = neon(shopOneDoorLED[0],shopOneDoorLED[2]);
  }
  if(int(currentTime) > shopTwoOpens && int(currentTime) < shopTwoCloses){
    // Candles...
    if(shopTwoWindowLED[1] == 1) shopTwoWindowLED[2] = candle(shopTwoWindowLED[0],shopTwoWindowLED[2]);
    //if(shopTwoDoorLED[1] == 1) shopTwoDoorLED[2] = candle(shopTwoDoorLED[0],shopTwoDoorLED[2]);
    // Neons...
    if(shopTwoWindowLED[1] == 2) shopTwoWindowLED[2] = neon(shopTwoWindowLED[0],shopTwoWindowLED[2]);
    //if(shopTwoDoorLED[1] == 2) shopTwoDoorLED[2] = neon(shopTwoDoorLED[0],shopTwoDoorLED[2]);
  }
  if(int(currentTime) > windowsOneLightsOn && int(currentTime) < windowsOneLightsOff){
    // Candles...
    if(flatOneWindowOneLED[1] == 1) flatOneWindowOneLED[2] = candle(flatOneWindowOneLED[0],flatOneWindowOneLED[2]);
    if(flatOneWindowTwoLED[1] == 1) flatOneWindowTwoLED[2] = candle(flatOneWindowTwoLED[0],flatOneWindowTwoLED[2]);
    // Neons...
    if(flatOneWindowOneLED[1] == 2) flatOneWindowOneLED[2] = neon(flatOneWindowOneLED[0],flatOneWindowOneLED[2]);
    if(flatOneWindowTwoLED[1] == 2) flatOneWindowTwoLED[2] = neon(flatOneWindowTwoLED[0],flatOneWindowTwoLED[2]);
  }
  if(int(currentTime) > windowsTwoLightsOn && int(currentTime) < windowsTwoLightsOff){
    // Candles...
    if(flatTwoWindowOneLED[1] == 1) flatTwoWindowOneLED[2] = candle(flatTwoWindowOneLED[0],flatTwoWindowOneLED[2]);
    // Neons...
    if(flatTwoWindowOneLED[1] == 2) flatTwoWindowOneLED[2] = neon(flatTwoWindowOneLED[0],flatTwoWindowOneLED[2]);
  }
  if(int(currentTime) > windowsThreeLightsOn && int(currentTime) < windowsThreeLightsOff){
    // Candles...
    if(flatThreeWindowOneLED[1] == 1) flatThreeWindowOneLED[2] = candle(flatThreeWindowOneLED[0],flatThreeWindowOneLED[2]);
    if(flatThreeWindowTwoLED[1] == 1) flatThreeWindowTwoLED[2] = candle(flatThreeWindowTwoLED[0],flatThreeWindowTwoLED[2]);
    // Neons...
    if(flatThreeWindowOneLED[1] == 2) flatThreeWindowOneLED[2] = neon(flatThreeWindowOneLED[0],flatThreeWindowOneLED[2]);
    if(flatThreeWindowTwoLED[1] == 2) flatThreeWindowTwoLED[2] = neon(flatThreeWindowTwoLED[0],flatThreeWindowTwoLED[2]);
  }
  
  // Fade types - 1: dawn, 2: sunset, 3: dusk
  if(isDawnFading) fade(1, nightSkyRGB, daySkyRGB, moonRGB, sunRGB, dawnFadeRange);
  if(isSunsetFading) fade(2, daySkyRGB, sunsetSkyRGB, sunRGB, sunsetSunRGB, sunsetFadeRange);
  if(isDuskFading) fade(3, sunsetSkyRGB, nightSkyRGB, sunsetSunRGB, moonRGB, duskFadeRange);

  // Trigger a lightning strike if a thunderstorm is happening
  if(isThunder && !isThundering && random(500) <= 2){
    isThundering = true;
    thunderSequenceSelection = random(5);
  }
  if(isThundering) lightning();

  // Trigger a magic spell explosion
  if(!spelling && random(chanceOfSpells) == 1){
    spelling = true;
    spellType = random(2);
  }
  if(spelling) spell();

  // Check if we need to reset the clock at the end of the day
  if(currentTime + timeInc > endOfDay){
    currentTime = 0;
  }else{
    currentTime = currentTime + timeInc;
  }


  delay(30);

}
