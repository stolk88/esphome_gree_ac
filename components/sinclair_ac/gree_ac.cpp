#include "esphome.h"
#include "sinclair_ac.h"

using namespace esphome;

// WiFi configuratie
wifi:
  ssid: !secret wifi_ssid
  password: !secret wifi_password

// ESP32 configuratie
esp32:
  board: esp32dev

// UART configuratie
uart:
  tx_pin: GPIO1
  rx_pin: GPIO3
  baud_rate: 9600

// Sinclair AC component
auto sinclair_ac = new SinclairACComponent();
sinclair_ac->set_name("HVAC Schuur");
sinclair_ac->set_uart_id(uart_0);

// Home Assistant API
api:
