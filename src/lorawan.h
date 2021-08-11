#ifndef LORAWAN_H
#define LORAWAN_H

#pragma once

#include <lmic.h>
#include <hal/hal.h>
#include <SPI.h>
#include <Arduino.h>
#include "LoRaWan_APP.h"
#include "ttncredentials.h"

void lorawan_runloop_once(void);
void setup_lorawan(unsigned int packet_interval); //seconds

#endif
