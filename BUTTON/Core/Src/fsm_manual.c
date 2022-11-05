/*
 * fsm_manual.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Admin
 */
#include "fsm_automatic.h"
#include "button.h"
void fsm_manual_run(){
	switch (status){
	case MAN_RED :

		//TODO
		if (timer_flag1 == 1){
			timer_flag1 =0;
			status = AUTO_RED;
			SetTimer1(500);
		}
		if (button1_flag ==1 ){
			button1_flag = 0;
			status = MAN_GREEN;
			SetTimer1(1000);
		}
		break;
	case MAN_GREEN:
		if (button1_flag == 1){
			button1_flag =0;
			status = MAN_YELLOW;
			SetTimer1(1000);
		}
		break;
	case MAN_YELLOW:
		if (button1_flag == 1){
				button1_flag =0;
				status = MAN_RED;
				SetTimer1(1000);
			}
		break;
	default :
		break;
	}
}


