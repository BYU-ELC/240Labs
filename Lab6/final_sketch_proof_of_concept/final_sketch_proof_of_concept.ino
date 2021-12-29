#define analog_pin A7
int analog_reading = 0;

const int motor_pin = 6;
const int blue_light = 5;
const int red_light = 4;

int inputNumber;

void setup() {
  
  // put your setup code here, to run once:
  pinMode(analog_pin, INPUT_PULLUP);
  pinMode(blue_light, OUTPUT);
  pinMode(red_light, OUTPUT);
  pinMode(motor_pin, OUTPUT);
  
  digitalWrite(blue_light, LOW);
  digitalWrite(blue_light, LOW);
  digitalWrite(motor_pin, LOW);

  Serial.begin(9600);
}

void loop() {
  analog_reading = analogRead(analog_pin);
  if (analog_reading < 70) {
    Serial.println("Lights Out!");
  } else {
    Serial.println("On!");
    
  }
  
  // put your main code here, to run repeatedly:
  digitalWrite(blue_light, LOW);
  digitalWrite(red_light, HIGH);
  digitalWrite(motor_pin, HIGH);
  delay(500);
  digitalWrite(red_light, LOW);
  digitalWrite(blue_light, HIGH);
  digitalWrite(motor_pin, LOW);
  delay(500);
}
