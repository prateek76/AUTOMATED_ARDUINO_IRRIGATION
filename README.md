# AUTOMATED ARDUINO IRRIGATION
Arduino based Automatic Plant Irrigation System

Irrigation is defined as artificial application of water to land or soil. Irrigation process can be used for the cultivation of agricultural crops during the span of inadequate rainfall and for maintaining landscapes. An automatic irrigation system does the operation of a system without requiring manual involvement of persons. Every irrigation system such as drip, sprinkler and surface gets automated with the help of electronic appliances and detectors such as computer, timers, sensors and other mechanical devices.

An automatic irrigation system does the work quite efficiently and with a positive impact on the place where it is installed. Once it is installed in the agricultural field, the water distribution to crops and nurseries becomes easy and doesn’t require any human support to perform the operations permanently.

<b>IIIT-A SEMESTER 4 ECE PROJECT</b>

## CIRCUIT DIAGRAM

![CIRCUIT DIAGRAM](/circuit.png?raw=true)

## CODE

```

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

```


## TEAM

* Prateek
* Rakesh kumar
* Akul juneja
