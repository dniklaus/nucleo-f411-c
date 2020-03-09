/*
 * Blinky.c
 *
 *  Created on: 09.03.2020
 *      Author: dev
 */

#include "main.h"
#include "Blinky.h"

void toggleLed()
{
  HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}
