/*
 * Application.c
 *
 *  Created on: 09.03.2020
 *      Author: dev
 */

#include "main.h"
#include "Blinky.h"
#include "Application.h"
#include "STM32UptimeInfoAdapter.h"
#include "SpinTimer.h"


void setup()
{
  SpinTimer_create(SpinTimer_IS_RECURRING);
  SpinTimer_assignTimeExpiredCallback(&toggleLed);
  SpinTimer_assignUptimeInfoCallout(&STM32UptimeInfoAdapter_tMillis);
  SpinTimer_start(cLedBlinkTimeMillis);
}

void loop()
{
  SpinTimer_tick();
}
