void setup(){
   pinMode(11, OUTPUT);
    Serial.begin(9600);   //Initialize serial output and baud rate
}

void loop(){
   digitalWrite(11,HIGH);
   delay(1000);
   digitalWrite(11,LOW);
   delay(1000);
   
   //Prints Hello World! repeatedly
   Serial.println("Hello World!");
}
