void randomLED()
{
  int index;
  int delayTime;

  index = random(8);  
  delayTime = 100;

  digitalWrite(ledPins[index], HIGH); 
  delay(delayTime);                   
  digitalWrite(ledPins[index], LOW);  
}
