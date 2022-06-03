void setup()
{
  pinMode(2,INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(2)==HIGH)
  {
    Serial.println("MOVIMENTO ");
    digitalWrite(8,HIGH);
    delay(200);
    digitalWrite(8,LOW);
    delay(100);
  }
  else
  {
    Serial.println("NÃO MOVIMENTO");
  }
}
