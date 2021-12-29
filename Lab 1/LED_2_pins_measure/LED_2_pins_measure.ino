// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("3 High!");
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);             // wait for a second
  Serial.println("4 High!");
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
