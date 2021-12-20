const int ledPin = 13;

//This function will only run once
void setup()
{
  //Set ledPin (PIN 13) as an OUTPUT pin, which power the LED with 5v (Arduino UNO)
  pinMode(ledPin, OUTPUT);
}

//This function will run repeatedly after running setup.
void loop()
{
  digitalWrite(ledPin, HIGH);   // Turn on the LED
  delay(1000);              // Wait for one second (1000 ms)
  digitalWrite(ledPin, LOW);    // Turn off the LED
  delay(1000);              // Wait for one second (1000 ms)
}
