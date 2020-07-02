#include <SoftwareSerial.h>

#define rxPin 11
#define txPin 12
#define relay 3
SoftwareSerial mySerial(rxPin, txPin); // RX, TX
char myChar ; 

void setup() {
  Serial.begin(9600);   
  mySerial.begin(9600);
  pinMode(relay,OUTPUT);
  digitalWrite(relay,HIGH);
}

void loop(){
  while(mySerial.available())
  {  
    myChar = mySerial.read();
    Serial.print(myChar);
    if(myChar=='1')
    {
      digitalWrite(relay,LOW);
      Serial.print("s");
    }
   else if(myChar=='0')
   {
   digitalWrite(relay,HIGH);
   }
   }
 }

  
