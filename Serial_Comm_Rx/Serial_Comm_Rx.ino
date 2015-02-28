/*
For more details see: https://urldefense.proofpoint.com/v2/url?u=http-3A__projectsfromtech.blogspot.com_&d=AwIGAg&c=-dg2m7zWuuDZ0MUcV7Sdqw&r=n_XQeWqngAV2HtzILsy0unm_Oe7ZyjRwBVQjp0igQYg&m=A5ZBut_xDKnNtv5WKGlbMyGkFNc3i6P7ckzdSrBdsHY&s=AK0hbcjSnofL2IpEn5AtbzvHcgutbZkQZTxPQGwSo60&e= 

Connect the Rx pin of this board to the Tx of the board running Serial_Comm_Tx.ino
Connect the Grounds of the two boards
Open Serial Monitor

Receives integer value and prints it to the serial monitor
*/
int val;
int fwdPin1 = 5;
int bwdPin1 = 4;


void setup()
{
  Serial.begin(9600);
  Serial.println("Serial Monitor Connected");
  pinMode(fwdPin1, OUTPUT);
  pinMode(bwdPin1, OUTPUT);
}

void loop()
{
  int incoming = Serial.available();
  val = Serial.parseInt();  //Reads integers as integer rather than ASCI. Anything else returns 0
  Serial.println(val);
  if (val == 1)
  {
   digitalWrite(fwdPin1, HIGH);
   digitalWrite(bwdPin1, LOW);
   digitalWrite(3, HIGH);
   digitalWrite(2, HIGH);
  // delay(1000);
  }else{
   digitalWrite(fwdPin1, HIGH);
   digitalWrite(bwdPin1, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(2, HIGH);
  }
}
