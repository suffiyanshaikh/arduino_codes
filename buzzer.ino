const int buzzer=A3;      //declare buzzer pin
// the setup function runs once when you press reset or power the board
void setup() 
{
  // initialize buzzer pin as an output.
  pinMode(buzzer,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(buzzer, HIGH);   // turn the buzzer on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the buzzer off by making the voltage LOW
  delay(5000);                       // wait for a second
}
