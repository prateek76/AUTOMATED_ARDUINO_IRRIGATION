void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(5,OUTPUT);
  digitalWrite(5,HIGH);
  Serial.begin(9600);
}


void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  if(sensorValue>=500){
    digitalWrite(5,LOW);
  }
  else{
    digitalWrite(5,HIGH);
  }
  delay(2000);
}
