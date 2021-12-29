int analog_pin = 0;
int analog_reading = 0;

void setup() {
  pinMode(analog_pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  analog_reading = analogRead(analog_pin);
  if (analog_reading < 70) {
    Serial.println("Lights Out!");
  } else {
    Serial.println("On!");
  }
  delay(200);
}
