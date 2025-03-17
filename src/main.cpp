void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH); // turn the LED on
  delay(1000);            // wait for 1000 milliseconds (1 second)
  digitalWrite(13, LOW);  // turn the LED off
  delay(1000);            // wait for 1000 milliseconds (1 second)
}
