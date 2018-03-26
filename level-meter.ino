int sensorValue = 0;  // variable to store the value coming from the sensor
int sensorPin = A0;    // select the input pin for the potentiometer


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  
  sensorValue = analogRead(sensorPin);

  if (sensorValue == 1023) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 255) {
    digitalWrite(13, HIGH);//LED1 - 3/4
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 510) {
    digitalWrite(12, HIGH);//LED2 - 2/4
    sensorValue = analogRead(sensorPin);
  } else if (sensorValue <= 766) {
    digitalWrite(11, HIGH); //LED3 - 1/4
    sensorValue = analogRead(sensorPin);
  }
  
  delay(sensorValue);
  Serial.print(sensorValue);
  
}
