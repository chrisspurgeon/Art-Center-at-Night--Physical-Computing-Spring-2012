/*
We'll take the input from a pot on pin A0,
and use that to control the brightness of
a LED on pin 3.

This works because 1) we're using an analog
input, and 2) pin 3 can do PWM.
*/



int inputReading;
int outputValue;

void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  inputReading = analogRead(A0);
  Serial.println(inputReading);
  outputValue = map(inputReading, 0, 1023, 0, 255);
  analogWrite(3, outputValue);

}
