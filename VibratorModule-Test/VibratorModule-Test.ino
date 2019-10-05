

const int digitalOutPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(digitalOutPin,OUTPUT);
} 
void loop() {
  digitalWrite(digitalOutPin,HIGH);
  Serial.println("Vibration ON");
  delay(5000);
  digitalWrite(digitalOutPin,LOW);
  Serial.println("Vibration OFF");
  delay(5000);
}
