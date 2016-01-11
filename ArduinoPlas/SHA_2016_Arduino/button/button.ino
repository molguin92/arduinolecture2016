void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  int button = digitalRead(7);
  if(button == HIGH)
  {
    digitalWrite(8, HIGH);
    delay(50);
    digitalWrite(8, LOW);
    delay(50);
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8, LOW);
  }
}
