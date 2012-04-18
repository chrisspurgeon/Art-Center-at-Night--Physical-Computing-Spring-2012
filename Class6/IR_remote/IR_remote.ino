/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Library available at http://arcfn.com
 * When looking at the IR receiver, the pins are signal, ground, and +5V
 */

#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

long upButton = -1592985593;
long downButton = -1593018361;

long thisButtonPush;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    thisButtonPush = results.value;
    Serial.print("Received a hex value of ");
    Serial.print(thisButtonPush, HEX);
    Serial.print(" which is equal to ");
    Serial.println(thisButtonPush);

    if (thisButtonPush == downButton) {
      Serial.println("Down button pressed!");
    } 
    else if (thisButtonPush == upButton) {
      Serial.println("Up button pressed!");
    }
    delay(10);
    irrecv.resume(); // Receive the next value
  }
}

