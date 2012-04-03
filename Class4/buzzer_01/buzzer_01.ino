/*
LED dimmer
 
 Let's use a buzzer with analog input.
 The buzzer is on pin 9, 
 The delay rate is coming from a pot
 on pin A0.
 
 Also try this with delayMicroseconds().
 But remember to turn off the Serial.print() statements!
 They slow things down too much.
 
 
 */
int potValue;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  potValue = analogRead(A0);
 // potValue = map(potValue,0,1023,1,255);
  digitalWrite(9,HIGH);
  delayMicroseconds(potValue);
  digitalWrite(9,LOW);
  delayMicroseconds(potValue);
  Serial.println("hi");
}


