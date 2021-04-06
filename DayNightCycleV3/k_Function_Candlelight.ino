int candle(int led, int count){
  if(count > 2){
    int r = candleColour[0]+(random(candleIntensity)-(candleIntensity/2));
    int g = candleColour[1]+(random(candleIntensity)-(candleIntensity/2));
    int v = candleIntensity/2;
    int b = candleColour[2]+(random(v)-(v/2));

    if(r>255) r = 255;
    if(g>255) g = 255;
    if(b>255) b = 255;
    if(r<0) r = 0;
    if(g<0) g = 0;
    if(b<0) b = 0;
    
    ShiftPWM.SetRGB(led,r,g,b);
    count = 0;
  }else{
    count++;
  }
  return count;
}
