int led = 2;                     //Define digital port 2
void setup()
{
  pinMode(led, OUTPUT);     //Set led to output}
}
void loop()
{
  digitalWrite(led, HIGH);   //Turn on led
   delay(1000); //delay for 1000ms              
  digitalWrite(led, LOW);    //Turn off led
  delay(1000);//delay for 1000ms 
}
