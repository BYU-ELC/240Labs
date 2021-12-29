const int pin3 = 3;
int inputNumber;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin3, OUTPUT);
  inputNumber = 0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!Serial.available()) {delay(100);}
  inputNumber = Serial.parseInt();
  Serial.readString();

  if(inputNumber < 0) {
    inputNumber = 0;
  } else if (inputNumber > 255) {
    inputNumber = 255;
  }

  analogWrite(pin3, inputNumber);
  
}
