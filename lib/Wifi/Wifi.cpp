#include <ESP8266WiFi.h>

#include "Wifi.hpp"

Wifi::Wifi(String ssid, String password):
_ssid(ssid),
_password(password)
{
}


void Wifi::connect()
{
  pinMode(2, OUTPUT);
  WiFi.begin(_ssid, _password);
  while (WiFi.status() != WL_CONNECTED)
  {
    digitalWrite(2, LOW);
    delay(1000);
    digitalWrite(2, HIGH);
    delay(2000);
  }
  digitalWrite(2, LOW);
}
