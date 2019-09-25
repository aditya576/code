int irsensor=2;
int pin=13;

void setup() {
pinMode(irsensor,INPUT);
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
int x=digitalRead(irsensor);
if(x==HIGH)
{
  Serial.println("Obstacle detected");
  digitalWrite(pin,HIGH);
}
if(x==LOW)
{
  
  Serial.println("No object");
  digitalWrite(pin,LOW);
}
delay(1000);
}
