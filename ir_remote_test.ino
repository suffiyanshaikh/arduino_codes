#include<Modbus.h>
#include <IRremote.h>//including infrared library
// Define sensor pin
const int RECV_PIN = 9;

// Define IR Receiver and Results Objects
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup() {
  // Serial Monitor @ 9600 baud
  Serial.begin(9600);
  // Enable the IR Receiver//
  irrecv.enableIRIn();
  digitalWrite(RECV_PIN, HIGH);
  pinMode(13, OUTPUT);
}
void loop() {
  if (irrecv.decode(&results)) //decodes the received ir signal and stored it in results
  
  {
    // Print Code in HEX
    Serial.print("results.value:");
    Serial.println(results.value, HEX); 
    irrecv.resume();
  }
  }
