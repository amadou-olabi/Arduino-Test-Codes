

const int digitalInPin = 8;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(digitalInPin,INPUT);
} 
void loop() {
  sensorValue = digitalRead(digitalInPin);
  Serial.print("isWater = ");
  Serial.println(sensorValue);
  delay(1000);
}
