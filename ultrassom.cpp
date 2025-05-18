#include <ultrassom.h>
#include <Arduino.h>

ultrassom::ultrassom(int trig, int echo) {
    _trig = trig; // Pinos
    _echo = echo;
    _distMargin = 15; // Padrão, pode ser alterado

    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
}

long ultrassom::microsecsToCentimeters(long microsecs) {
    return microsecs / 29 / 2; //Dado a duração recebida do echo, retorna o valor em centimetros
}

long ultrassom::getDistance() {
    digitalWrite(trig, LOW); //Envia uma onda de ultrassom
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    long duration = pulseIn(echo, HIGH); //Recebe de volta a onda calculando a duração que demorou para voltar
    long distance = microsecsToCentimeters(duration); //Transfere a duração para distância
    return distance;
}

void ultrassom::setMargin(int distMargin) {
    _distMargin = distMargin;
}

bool ultrassom::checkObstacle() {
    long dist = getDistance();
    return (dist <= _distMargin);
}