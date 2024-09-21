// C++ code
// Servo motor;
float moisture=0.0;
float temp=0.0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A5,INPUT);
  motor.attach(11);
  Serial.begin(9600);
}
void loop() {
  moisture=analogRead(A5);
  temp=analogRead(A0);
  Serial.print("temp ");
  Serial.println(temp);
  Serial.print("moisture ");
  Serial.println(moisture);
  motor.write(90);
  if(temp>200) {
    if (moisture<50) {
      motor.write(90);
    }
  } else{
    motor.write(0);
  }
  delay(1000);
