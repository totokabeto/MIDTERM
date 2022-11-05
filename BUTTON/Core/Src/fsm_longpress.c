/*
* fsm_longpress.c
*
*  Created on: Nov 5, 2022
*      Author: BOSCH - HCMUT
*/

#include "fsm_longpress.h"

/*
* fsm_manual.c
*
*  Created on: Oct 12, 2022
*      Author: Admin
*/
#include "fsm_automatic.h"
#include "button.h"
#include "display7seg.h"
#include "fsm_longpress.h"

void fsm_longpress_run(){
switch (status){
case LONG_0:
	display7seg(0);
	if (timer_flag1 ==1 ){
	timer_flag1 = 0;
	if (button2_flag2 ==1){
		button2_flag2 =0;
	status = LONG_1;
	setTimer1(100);}
	}


break;
case LONG_1:
	display7seg(1);
	if (timer_flag1 ==1 ){
	timer_flag1 = 0;
	if (button2_flag2 ==1){
		button2_flag2 =0;
	status = LONG_2;
	setTimer1(100);}
	}
break;
case LONG_2:
	display7seg(2);
	if (timer_flag1 ==1 ){
	timer_flag1 = 0;
	if (button2_flag2 ==1){
	button2_flag2 =0;
	status = LONG_3;
	setTimer1(100);}
	}
break;
case LONG_3:
	display7seg(3);
	if (timer_flag1 ==1 ){
	timer_flag1 = 0;
	if (button2_flag2 ==1){
		button2_flag2 =0;
	status = LONG_4;
	setTimer1(100);}
	}
break;
case LONG_4:
	display7seg(4);
	if (timer_flag1 ==1 ){
		timer_flag1 =0;
	timer_flag1 = 0;
	if (button2_flag2 ==1){
		button2_flag2 =0;
	status = LONG_5;
	setTimer1(100);}
	}
break;
case LONG_5:
	display7seg(5);
	if (timer_flag1 ==1 ){
	timer_flag1 = 0;
	if (button2_flag2 ==1){
	button2_flag2 =0;
	status = LONG_6;
	setTimer1(100);}
	}
	break;
case LONG_6:
	display7seg(6);
if (timer_flag1 ==1 ){
timer_flag1 = 0;
if (button2_flag2 ==1){
	button2_flag2 =0;
status = LONG_7;
setTimer1(100);}
}
break;
case LONG_7:
display7seg(7);
if (timer_flag1 == 1){
timer_flag1 = 0;
if (button2_flag2 ==1){
	button2_flag2 =0;
status = LONG_8;
setTimer1(100);}
}
break;
case LONG_8:
	display7seg(8);
	if (timer_flag1 ==1 ){
timer_flag1 = 0;
if (button2_flag2 ==1){
	button2_flag2 =0;
status = LONG_9;
setTimer1(100);}
}
break;
case LONG_9:
	display7seg(9);
if (timer_flag1 == 1 ){
timer_flag1 = 0;
if (button2_flag2 ==1){
	button2_flag2 =0;
status = LONG_0;
setTimer1(100);}
}
break;
default :
break;
}
}


