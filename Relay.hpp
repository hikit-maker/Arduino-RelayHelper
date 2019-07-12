#ifndef _RELAY_H_

#define _RELAY_H_

#include "Arduino.h"

class Relay {
    public:
        Relay(int pin);
        Relay(int pin, int on, int off);
        void setOn();
        void setOff();
        bool isOn();
        bool isOff();

    private:
        int pin;
        int on;
        int off;
        int state;

        void update();
};

#endif  // _RELAY_H_
