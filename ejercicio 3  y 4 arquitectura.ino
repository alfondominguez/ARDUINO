void setup()
{
  pinMode(7, INPUT);//define el pin 7 como entrada 
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);//define el pin 2 como salida 
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(7) == HIGH) {//si leo el pin 7 y esta en alto 
    if (digitalRead(8) == HIGH) {//si leo el pin 8 y esta en alto
      digitalWrite(2, HIGH);//se prende el pin 2
      tone(9, 548668578, 1000); //define el tono de la alarma en el pin 9 con una frecuencia de 548668578y una distancia de 1000
    } else {//si no se cumple la condicion anterior pasa esto 
      digitalWrite(2, LOW); //el pin 2 derfine que apague 
      noTone(9);//esto le define el tono y el tiempo que suena la alarma 
    }
  } else {
    digitalWrite(8, LOW);el pin 8 se apaga
    noTone(7);// se apaga el parlante 
  }
  delay(10); // Delay a little bit to improve simulation performance//esto define el tiempo de espera 
}
