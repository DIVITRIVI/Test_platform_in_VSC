#include <Arduino.h>
#define led 13

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led,HIGH);
  Serial.println("Este era la linea local");
  delay(1000);
  digitalWrite(led,LOW);
  Serial.println("Se apaga la luz");
  delay(1000);
}
