/*void fan{
  int fan = 1;
  threshold = x;
  
  while (1==1){
  flameSensor == 1; //or if threshold >= x;
  fan == 2;
  } 
}
*/

int fan = 2;

void setup()
{
  pinMode(fan, OUTPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  delay(10000);
 
}
