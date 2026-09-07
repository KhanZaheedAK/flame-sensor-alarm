const int flameSensor = 2;
const int led = 8;
const int buzzer = 9;

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int flame = digitalRead(flameSensor);

  Serial.println(flame);

  if (flame == HIGH) {
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
} else {
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
}

  delay(100);
}