#include <Arduino.h>

#include "secrets.hpp"
#include "Wifi.hpp"

Wifi wifi(secrets::SSID, secrets::PASSWORD);

void setup() {
  wifi.connect();
}

void loop() {
}