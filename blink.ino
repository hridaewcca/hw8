int sensorValue = 0;  // variable to store the value coming from the sensor
int sensorPin = A0;    // select the input pin for the potentiometer


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}
void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);  //monitor what is happening on the board
  // turn the ledPin on
  digitalWrite(13, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(13, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);

}
