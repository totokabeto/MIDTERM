/*
 * LedBlinky.c
 *
 *  Created on: Nov 5, 2022
 *      Author: BOSCH - HCMUT
 */

#include "LedBlinky.h"

void fsm_ledBlinky_run (){
switch (ledstatus){
case LED_INIT:
ledstatus = LED_ON;
setTimer3(100);
break;
case LED_ON :
if (timer_flag3 == 1){
timer_flag3 = 0;
HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
ledstatus = LED_OFF;
setTimer3(100);
}
break;
case LED_OFF :
if (timer_flag3 == 1){
timer_flag3 =0;
HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
ledstatus = LED_ON;
setTimer3(100);
}
break ;
}
}
