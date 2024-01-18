#include <Arduino.h>
#pragma once

class Wifi {
    private:
        String _ssid;
        String _password;
    public:
        Wifi(String ssid, String password);
        void connect();
};