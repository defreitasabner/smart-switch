#include "SmartSwitch.hpp"
#include <Espalexa.h>

SmartSwitch::SmartSwitch(unsigned short int pin):
_pin(pin)
{
}

void SmartSwitch::init(String deviceName)
{
    pinMode(_pin, OUTPUT);
    auto toggleFunction = [this](uint8_t brightness) {
        this->toggle(brightness);
    };
    EspalexaDevice* device = new EspalexaDevice(deviceName, toggleFunction);
    _espalexa.addDevice(device);
    _espalexa.begin();
}

void SmartSwitch::listen()
{
    _espalexa.loop();
}

void SmartSwitch::toggle(uint8_t brightness)
{
    if(brightness)
    {
        digitalWrite(_pin, LOW);
    }
    else
    {
        digitalWrite(_pin, HIGH);
    }
}
