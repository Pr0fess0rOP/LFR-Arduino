int left;
int right; 

void setup() 
{
  pinMode(10,OUTPUT);//left
  pinMode(11,OUTPUT);//left
  pinMode(12,OUTPUT);//right
  pinMode(13,OUTPUT);//right
  pinMode(2,INPUT);//left sensor
  pinMode(4,INPUT);//right sensor
}

void loop() 
{
  left=digitalRead(2);
  right=digitalRead(4);
  if(left==1 && right==1)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);

    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }
  if(left==1 && right==0)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);

    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  }
  if(left==0 && right==1)
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);

    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }
}
