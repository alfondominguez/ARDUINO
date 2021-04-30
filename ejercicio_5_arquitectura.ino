int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Limpiar el gatillo
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Establece el pin de disparo en estado ALTO durante 10 microsegundos
  digitalWrite(triggerPin, HIGH);//define la variable triggerpin como prendido 
  delayMicroseconds(10);//espera 10 mikcrosegundos
  digitalWrite(triggerPin, LOW);//define la variable triggerpin como apagado
  pinMode(echoPin, INPUT);//define la variable echopin como entrada 
  // Lee el pin de eco y devuelve el tiempo de viaje de la onda de sonido en microsegundos
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);//inicia el puerto serial a 9600 baudios 

  pinMode(8, OUTPUT);//define al pin 8 como salida
  pinMode(7, OUTPUT);//define al pin 7 como salida
}

void loop()
{
  distancia = 0;
  Serial.println(distancia);//si la distancia es menor a 150 m hace que dispare el sensor 
  if (0.01723 * readUltrasonicDistance(6, 5) < 150) {
    digitalWrite(8, HIGH);
    tone(7, 548668578, 1000); //tono de reproducción 300 (C25 = 548668578 Hz)//prendo el parlante
  } else {
    noTone(7);//apago el parlante
    digitalWrite(8, LOW);
  }
  delay(10); // Retrase un poco para mejorar el rendimiento de la simulación
}
