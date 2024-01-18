#include <Espalexa.h>
#pragma once

class SmartSwitch 
{
    private:
        unsigned short int _pin;
        Espalexa _espalexa;
    public:
        SmartSwitch(unsigned short int pin);
        void init(String deviceName);
        void listen();
    private:
        void toggle(uint8_t brightness);
};