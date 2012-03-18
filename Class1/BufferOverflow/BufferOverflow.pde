/* BufferOverflow */


byte foo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(foo, DEC);
  foo++;
}
