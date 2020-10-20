/*
 * Blinky.c
 *
 *  Created on: 09.03.2020
 *      Author: dev
 */

#include <stdio.h>
#include "main.h"
#include "Blinky.h"
#include "STM32UptimeInfoAdapter.h"

void toggleLed()
{
  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
  // printf("LD1: %d\n", HAL_GPIO_ReadPin(LD2_GPIO_Port, LD2_Pin));
}
