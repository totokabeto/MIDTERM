/*
* button.c
*
*  Created on: Sep 21, 2022
*      Author: KAI
*/

#include "button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int Key2Reg0 = NORMAL_STATE;
int Key2Reg1 = NORMAL_STATE;
int Key2Reg2 = NORMAL_STATE;
int Key2Reg3 = NORMAL_STATE;

int Key3Reg0 = NORMAL_STATE;
int Key3Reg1 = NORMAL_STATE;
int Key3Reg2 = NORMAL_STATE;
int Key3Reg3 = NORMAL_STATE;


int TimeOutForKeyPress =  300;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
int button2_flag2 = 0;
int button3_flag3 =0;
void subKeyProcess(){
button1_flag = 1;
}
void subKeyProcess2(){
button2_flag = 1;
}
void subKeyProcess3(){
button3_flag = 1;
}
void getKeyInput(){
KeyReg2 = KeyReg1;
KeyReg1 = KeyReg0;
KeyReg0 = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13);
if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
if (KeyReg2 != KeyReg3){
KeyReg3 = KeyReg2;

if (KeyReg3 == PRESSED_STATE){

TimeOutForKeyPress = 300;
subKeyProcess();
}
}else{
TimeOutForKeyPress --;
if (TimeOutForKeyPress == 0){
KeyReg3 = NORMAL_STATE;
}
}
}
}
void getKeyInput2(){
Key2Reg2 = Key2Reg1;
Key2Reg1 = Key2Reg0;
Key2Reg0 = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_14);
if ((Key2Reg1 == Key2Reg0) && (Key2Reg1 == Key2Reg2)){
if (Key2Reg2 != Key2Reg3){
Key2Reg3 = Key2Reg2;

if (Key2Reg3 == PRESSED_STATE){
TimeOutForKeyPress = 300;
subKeyProcess2();
}
}else
{
TimeOutForKeyPress --;
if (TimeOutForKeyPress == 0){
if (Key2Reg3 == PRESSED_STATE){
button2_flag2 =1;
TimeOutForKeyPress = 100;
}

}
}
}
}
void getKeyInput3(){
Key3Reg2 = Key3Reg1;
Key3Reg1 = Key3Reg0;
Key3Reg0 = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
if ((Key3Reg1 == Key3Reg0) && (Key3Reg1 == Key3Reg2)){
if (Key3Reg2 != Key3Reg3){
Key3Reg3 = Key3Reg2;

if (Key3Reg3 == PRESSED_STATE){
TimeOutForKeyPress = 300;
subKeyProcess3();
}
}else
{
TimeOutForKeyPress --;
if (TimeOutForKeyPress == 0){
if (Key3Reg3 == PRESSED_STATE){
button3_flag3 =1;
TimeOutForKeyPress = 100;
}

}
}
}
}

