/*
LED dimmer
 
 Let's have an LED on pin 9, and control
 it's brightness via a pot on pin A0
 
 */
int potValue;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT); 
 Serial.begin(9600); 
}

void loop() {
  potValue = analogRead(A0);
  Serial.print(potValue);
  potValue = map(potValue,0,1023,0,255);
  Serial.print("  ");
  Serial.println(potValue);
  analogWrite(9, potValue);

}

