void setup()      //Setup to configure pins
{
   const int ledPin = 13;
   pinMode(ledPin, OUTPUT);   
}

void loop()      //Equivalent of a infinite loop
{
   digitalWrite(ledPin, HIGH);
   delay(1000);
   digitalWrite(ledPin, LOW);
   delay(1000);
}
