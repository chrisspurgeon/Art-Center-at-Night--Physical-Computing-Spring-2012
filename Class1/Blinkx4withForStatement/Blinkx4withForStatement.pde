/* Blinkx4withForStatement */


int whichPin;

void setup() {
  for (whichPin = 10; whichPin <= 13; whichPin++) {
    pinMode(whichPin, OUTPUT);     
    pinMode(whichPin, OUTPUT);     
    pinMode(whichPin, OUTPUT);     
    pinMode(whichPin, OUTPUT);     
  }
}

void loop() {
  for (whichPin = 10; whichPin <= 13; whichPin++) {
    digitalWrite(whichPin, HIGH);  
    digitalWrite(whichPin, HIGH);  
    digitalWrite(whichPin, HIGH);  
    digitalWrite(whichPin, HIGH);
  }
  delay(100000);              
  for (whichPin = 10; whichPin <= 13; whichPin++) {
    digitalWrite(whichPin, LOW);
    digitalWrite(whichPin, LOW);
    digitalWrite(whichPin, LOW);
    digitalWrite(whichPin, LOW);
  }
  delay(1000); 
}




