int brightness=0;
int fadeamount=5;
void setup() 
{
pinMode(8,OUTPUT);
}
void loop()
{
  analogWrite(8,brightness);
  brightness=brightness+fadeamount;
  if(brightness<=0||brighness>=255)
  {fadeamount=-fadeamount;
  }
  delay(6);
}
