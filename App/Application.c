/*
 * Application.c
 *
 *  Created on: 09.03.2020
 *      Author: dev
 */

#include "main.h"
#include "Blinky.h"
#include "Application.h"

void setup()
{

}

void loop()
{
	toggleLed();
	HAL_Delay(cLedBlinkTimeMillis);
}
