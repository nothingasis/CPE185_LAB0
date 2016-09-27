void setup()      //Setup to configure pins
{
   const int ledPin = 13;
   int pushPin = 12;
   pinMode(pushPin, INPUT);
   pinMode(ledPin, OUTPUT);   
   Serial.begin(9600);   //Initializes 
}

void loop()      //Equivalent of a infinite loop
{
   digitalWrite(ledPin, HIGH);
   delay(1000);
   digitalWrite(ledPin, LOW);
   delay(1000);
   if(ledPin)
   {
      Serial.println("It's on!");
   }
}
