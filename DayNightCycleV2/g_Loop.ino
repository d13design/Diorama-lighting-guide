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

  // Check if we need to reset the clock at the end of the day
  if(currentTime + timeInc > endOfDay){
    currentTime = 0;
  }else{
    currentTime = currentTime + timeInc;
  }

  delay(30);

}
