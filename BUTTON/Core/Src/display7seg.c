/*
 * display7seg.c
 *
 *  Created on: Nov 5, 2022
 *      Author: BOSCH - HCMUT
 */
#include "display7seg.h"
#include "main.h"
void display7seg (int num){
switch (num){
case 0 : {
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_SET );

break;
}
case 1 :{
HAL_GPIO_WritePin (GPIOB, GPIO_PIN_1 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_SET );

break;
}
case 2  :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );

break;}
case 3 :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );

break;}
case 4  :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );

break;}
case 5  :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );


break;}
case 6  :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );

break;}
case 7  :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_SET );

break;}
case 8  :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );

break;}
case 9 :{
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_1 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_2 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_4 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_5 , GPIO_PIN_SET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_6 , GPIO_PIN_RESET );
HAL_GPIO_WritePin (GPIOB , GPIO_PIN_7 , GPIO_PIN_RESET );


break;}
default :{break;}

}
}
