#include <Arduino.h>
#include "secrets.hpp"
#include "Wifi.hpp"
#include "SmartSwitch.hpp"
#include "pins.hpp"
#include "device.hpp"

Wifi wifi(secrets::SSID, secrets::PASSWORD);
SmartSwitch smartSwitch(pins::BUILT_IN_LED);

void setup() {
  wifi.connect();
  smartSwitch.init(device::DEVICE_NAME);
}

void loop() {
  smartSwitch.listen();
}