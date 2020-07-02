const int trigger1=2;//ultrasonic pins
const int echo1=3;
const int trigger2=4;
const int echo2=5;

float duration1,left_distance,duration2,right_distance;
void setup() 
{
pinMode(trigger1,OUTPUT);
pinMode(echo1,INPUT);
pinMode(trigger2,OUTPUT);
pinMode(echo2,INPUT);// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() 
{
sensor1(trigger1,echo1);
sensor2(trigger2,echo2);
Serial.print("left_distance in cm:");
Serial.println(left_distance);
Serial.print("right_distance in cm:");
Serial.println(right_distance);
delay(2000);
}

void sensor1(int trigger1,int echo1)
{
  digitalWrite(trigger1,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger1,LOW);
  duration1=pulseIn(echo1,HIGH);
  left_distance=(duration1*0.343)/2;
  return left_distance;
}

void sensor2(int trigger2,int echo2)
{
  digitalWrite(trigger2,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger2,LOW);
  duration2=pulseIn(echo2,HIGH);
  right_distance=(duration2*0.343)/2;
  return right_distance;
}
