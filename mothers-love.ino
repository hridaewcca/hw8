int sensorValue = 0;
int sensorPin = A0;

void setup() {
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  for (int fadeValue = 0 ; fadeValue <= 1000; fadeValue ++) {
    analogWrite(13, fadeValue);
    delay(10);
  }

  for (int fadeValue = 1000 ; fadeValue = 0; fadeValue --) {
    analogWrite(13, fadeValue);
    delay(10);
  }
}
