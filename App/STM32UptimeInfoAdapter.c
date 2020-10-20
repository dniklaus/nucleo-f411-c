/*
 * STM32UptimeInfoAdapter.c
 *
 *  Created on: Oct 20, 2020
 *      Author: dev
 */

#include "STM32UptimeInfoAdapter.h"

unsigned long STM32UptimeInfoAdapter_tMillis()
{
  unsigned long ms = HAL_GetTick();
  return ms;
}
