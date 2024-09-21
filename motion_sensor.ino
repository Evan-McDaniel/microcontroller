int ledPin = 4;                // Pin LED is connected to
int speakerPin = 3;     // Pin Piezo is connected to
int pirSensorPin = 2;               // PIN PIR Sensor is connected to

int motionDetected = LOW;             // Start MotionDetected as low (No motion detected)

void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(pirSensorPin, INPUT);     // declare the PIR sensor as input
  pinMode(speakerPin, OUTPUT); //declare buzzer as output
  Serial.begin(9600); 
  delay(5000); //Allow time for the PIR Sensor to callibrate
}

void loop(){
  motionDetected = digitalRead(pirSensorPin);  // Read the PIR sensor
  if(motionDetected == HIGH)
  {            
    digitalWrite(ledPin, HIGH);
    analogWrite(speakerPin, 200);
    delay(100);
    analogWrite(ledPin, LOW);
    analogWrite(speakerPin, 25);
    delay(100);
  }
  digitalWrite(ledPin, LOW);
  digitalWrite(speakerPin,LOW);
}
