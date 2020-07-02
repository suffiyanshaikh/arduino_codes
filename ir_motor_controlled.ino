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
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
}



void loop() {
  if (irrecv.decode(&results)) //decodes the received ir signal and stored it in results
  {
    // Print Code in HEX
    Serial.print("results.value:");
    Serial.println(results.value, HEX);

    switch (results.value)
    {
      case 0xE0E036C9:
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(13, HIGH);
        delay(2000);
        digitalWrite(13, LOW);
        break;

      case 0xE0E028D7:
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(13, HIGH);
        delay(2000);
        digitalWrite(13, LOW);
        break;
      
      case 0xE0E0A857:

        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(13, HIGH);
        delay(2000);
        digitalWrite(13, LOW);
        break;
    }
    
    irrecv.resume();
  }
  }
