void setup()

{
  pinMode(7, OUTPUT); //define el pin 7 como salida 
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()

{
  digitalWrite(7, HIGH);//define que el pin 7 que prenda el led
  digitalWrite(2, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);//define que el pin 7 apague el led 
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
}
