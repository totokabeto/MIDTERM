/*
* fsm_automatic.c
*
*  Created on: Oct 5, 2022
*      Author: Admin
*/
/*#include "fsm_automatic.h"
#include "global.h"
#include "button.h"
#include "main.h"
#include "display7seg.h"
void fsm_automatic_run(){
switch(status){
case INIT :
display7seg(0);
status = MAN_INC0;
setTimer2(200);
ledstatus = LED_ON;

break;
case AUTO_0:
	if (button1_flag ==1 ){
	button1_flag = 0;
	status = INIT;
	}
if (timer_flag2 ==1 ){
timer_flag2 =0;
display7seg(0);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC1;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC0;
}
break;
case AUTO_1:
//TOD0
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(1);
status = AUTO_0;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC2;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC1;
}
break;
case AUTO_2:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(2);
status = AUTO_1;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC3;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC2;
}
case AUTO_3:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(3);
status = AUTO_2;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC4;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC3;
}
break;
case AUTO_4:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(4);
status = AUTO_3;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC5;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC4;
}
break;
case AUTO_5:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(5);
status = AUTO_4;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC5;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC5;
}
break;
case AUTO_6:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC6;
}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(6);
status = AUTO_5;
setTimer2(100);
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC6;
}
break;
case AUTO_7:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(7);
status = AUTO_6;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC7;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC7;
}
break;
case AUTO_8:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC7;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC8;
}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(8);
status = AUTO_7;
setTimer2(100);
}
break;
case AUTO_9:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC9;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC9;
}
if (timer_flag2 == 1){
timer_flag2 = 0 ;
display7seg(9);
status = AUTO_8;
setTimer2(100);
}
break;
default:
break;
}
}*/
#include "fsm_automatic.h"
#include "global.h"
#include "button.h"
#include "main.h"
#include "display7seg.h"
void fsm_automatic_run(){
switch(status){
case INIT :
display7seg(0);
status = MAN_INC0;
setTimer2(1000);
ledstatus = LED_ON;
break;
case AUTO_0:
	if (button1_flag ==1 ){
	button1_flag = 0;
	status = INIT;
	}
if (timer_flag2 ==1 ){
timer_flag2 =0;
display7seg(0);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC1;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC0;
}
break;
case AUTO_1:
//TOD0
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(1);
status = AUTO_0;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC2;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC1;
}
break;
case AUTO_2:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(2);
status = AUTO_1;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC3;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC2;
}
case AUTO_3:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(3);
status = AUTO_2;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC4;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC3;
}
break;
case AUTO_4:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(4);
status = AUTO_3;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC5;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC4;
}
break;
case AUTO_5:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(5);
status = AUTO_4;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC5;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC5;
}
break;
case AUTO_6:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC6;
}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(6);
status = AUTO_5;
setTimer2(100);
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC6;
}
break;
case AUTO_7:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(7);
status = AUTO_6;
setTimer2(100);
}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC7;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC7;
}
break;
case AUTO_8:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC7;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC8;
}
if (timer_flag2 == 1){
timer_flag2 =0;
display7seg(8);
status = AUTO_7;
setTimer2(100);
}
break;
case AUTO_9:
	if (button1_flag ==1 ){
		button1_flag = 0;
		status = INIT;
		}
if (button2_flag == 1){
button2_flag = 0;
status = MAN_INC9;
}
if (button3_flag == 1){
button3_flag = 0;
status = MAN_INC9;
}
if (timer_flag2 == 1){
timer_flag2 = 0 ;
display7seg(9);
status = AUTO_8;
setTimer2(100);
}
break;
default:
break;
}
}
