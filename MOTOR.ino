const int in_1=8;
const int in_2=7;
const int in_3=6;
const int in_4=5;
void setup() 
{
pinMode(in_1,OUTPUT);
pinMode(in_2,OUTPUT);
pinMode(in_3,OUTPUT);
pinMode(in_4,OUTPUT);


}

void loop() {
digitalWrite(in_1,HIGH);
digitalWrite(in_2,LOW);
digitalWrite(in_3,HIGH);
digitalWrite(in_4,LOW);
delay(5000);
digitalWrite(in_1,LOW);
digitalWrite(in_2,LOW);
digitalWrite(in_3,LOW);
digitalWrite(in_4,LOW);
delay(5000);
}
