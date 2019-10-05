//Constants:
  
 int IRPin = A0; //pin A0 to read input

//Variables:
int value; //save analog value


void setup(){
  
  pinMode(IRPin, INPUT);// Set A0 as input
  Serial.begin(115200);       //Begin serial communication

}

void loop(){
  
  value = analogRead(IRPin);         //Read and save analog value from ir sensor
  Serial.println(value);               //Print value
 
}
