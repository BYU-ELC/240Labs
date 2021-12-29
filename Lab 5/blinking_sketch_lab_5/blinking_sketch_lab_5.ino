const int blue_light = 5;
const int red_light = 4;
int inputNumber;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue_light, OUTPUT);
  pinMode(red_light, OUTPUT);
  Serial.begin(9600);

  digitalWrite(blue_light, LOW);
  digitalWrite(blue_light, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blue_light, LOW);
  digitalWrite(red_light, HIGH);
  delay(500);
  digitalWrite(red_light, LOW);
  digitalWrite(blue_light, HIGH);
  delay(500);
}
