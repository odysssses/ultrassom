#ifndef ultrassom_h
#define ultrassom_h

#include <Arduino.h>

class ultrassom {
    public:
        ultrassom(int trig, int echo); //Construtor (trig = PWM, echo = PWM)

        long microsecsToCentimeters(long microsecs); //Transfere distância (microssegundos -> centímetros)

        long getDistance(); //Retorna a distância que o sensor lê

        void setMargin(int distMargin);

        bool checkObstacle();

    private:
        int _trig;
        int _echo;
        int _distMargin;

}

#endif