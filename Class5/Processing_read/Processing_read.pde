/* Processing sketch to connect with an Arduino */

import processing.serial.*;

Serial myPort; // create a serial object
int portIndex = 0; 
int val;

void setup() {
  size(200,200);
  println(Serial.list()); // Here are all of the current serial ports
  println("Connecting to serial object " + Serial.list()[portIndex]);
  myPort = new Serial(this, Serial.list()[portIndex], 9600);
}

void draw() {
  if (myPort.available() > 0) { // if data is available
    val = myPort.read();
    println(val);
  }
}
