/*
* fsm_manual.c
*
*  Created on: Oct 12, 2022
*      Author: Admin
*/
#include "fsm_automatic.h"
#include "button.h"
#include "display7seg.h"
void fsm_manual_run(){
switch (status){
case MAN_INC0 :
display7seg(0);
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC1;
}
if (button2_flag2 == 1){
button2_flag2 =0;
status = LONG_1;
setTimer1(100);
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC9;
}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_0;
}
break;
case MAN_INC1:
display7seg(1);
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;
}
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC2;
}
if (button2_flag2 == 1){
button2_flag2 = 0;
status = LONG_2;
}
if (button3_flag == 1){
	button3_flag =0;
	status = INIT;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_1;
}
break;
case MAN_INC2:
display7seg(2);
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;
}

if (button2_flag == 1){
button2_flag =0;
status = MAN_INC3;
}
if (button2_flag2 == 1){
button2_flag2 = 0;
status = LONG_3;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC1;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_2;
}
break;

case MAN_INC3:
display7seg(3);
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;

}
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC4;
}
if (button2_flag2 == 1){
button2_flag2 =0;
status = LONG_3;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC2;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_3;
}
break;
case MAN_INC4:
display7seg(4);
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;

}
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC5;
}
if (button2_flag2 == 1){
button2_flag2 =0;
status = LONG_4;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC3;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_4;
}
break;
case MAN_INC5:
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;
}
display7seg(5);
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC6;
}
if (button2_flag2 == 1){
button2_flag2 = 0;
status = LONG_5;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC4;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_5;
}
break;
case MAN_INC6:
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;
}
display7seg(6);
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC7;
}
if (button2_flag2 == 1){
button2_flag2 = 0;
status = LONG_6;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC5;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_6;
}
break;
case MAN_INC7:
display7seg(7);
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;
}
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC8;
}
if (button2_flag2 == 1){
button2_flag2 = 0;
status = LONG_7;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC6;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_7;
}
break;
case MAN_INC8:
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;

}
display7seg(8);
if (button2_flag == 1){
button2_flag =0;
status = MAN_INC9;
}
if (button2_flag2 == 1){
button2_flag2 =0;
status = LONG_8;
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC7;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_8;
}
break;
case MAN_INC9:
	display7seg(9);
if (button1_flag ==1 ){
button1_flag = 0;
status = INIT;
}
if (button2_flag == 1){
button2_flag = 0;
status = INIT;
}
if (button2_flag2 == 1){
button2_flag2 = 0;
status = LONG_9;
}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_9;
setTimer2(100);
}
if (button3_flag == 1){
	button3_flag =0;
	status = MAN_INC8;}
if (timer_flag2 == 1){
timer_flag2 = 0;
status = AUTO_9;
}
break;
default :
break;
}
}


