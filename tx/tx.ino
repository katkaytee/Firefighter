const int trigPin = 10;
const int echoPin = 11;
long duration, cm;
int i;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  
  cm = (duration/2) / 29.1;
  
  if(cm > 10){
    i = 1;
  }else{ 
     i =0;
  }
  
  //Serial.println(cm);
  
  Serial.println (i); //Send cm to Rx Arduino 

}
