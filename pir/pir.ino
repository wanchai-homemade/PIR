
int pirPin = D1;
int relayPin1 = D5;
int relayPin2 = D6;
int pirValue;


void setup()
{
  Serial.begin(115200);
 
  pinMode(pirPin, INPUT);
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
}

void pirSensor()
{
  pirValue = digitalRead(pirPin);
  
}

void loop()
{
  
  pirSensor();
  if (pirValue == HIGH)
  {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, LOW);
  }
  
  else
  digitalWrite(relayPin1, HIGH);
  digitalWrite(relayPin2, HIGH); 
}
