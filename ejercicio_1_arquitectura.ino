void setup()

//esto define al pin 8 como entrada y el pin 7 como salida
{ 
  pinMode(8, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()

//esto define que el pin 8 prende y el pin 6 apaga 
{
  if (digitalRead(8) == HIGH) {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    
    //esto le da el tiempo de espera 
  }
  delay(10); // Delay a little bit to improve simulation performance
}
