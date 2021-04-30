int temperatura = 0;

void setup()
{
  pinMode(A0, INPUT);//define el pin A0 como entrada
  pinMode(11, OUTPUT);//define el pin 11 como salida 
  pinMode(10, OUTPUT);
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  if (temperatura < 35) {define si la temperatura es menor de 35
    digitalWrite(11, HIGH);//define el pin 11 como prendido
    digitalWrite(10, LOW);//define al pin 10 como apagdo
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance//define el tiempo de espera 
}
