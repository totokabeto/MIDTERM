/*
 * global.h
 *
 *  Created on: Oct 5, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"

#define INIT        	1
#define AUTO_RED    	2
#define AUTO_GREEN  	3
#define AUTO_YELLOW  	4

#define MAN_INC0 	12
#define MAN_INC1 	13
#define MAN_INC2 	14
#define MAN_INC3 	15
#define MAN_INC4 	16
#define MAN_INC5 	17
#define MAN_INC6 	18
#define MAN_INC7 	19
#define MAN_INC8 	20
#define MAN_INC9 	21

#define LONG_0		30
#define LONG_1		31
#define LONG_2		32
#define LONG_3		33
#define LONG_4		34
#define LONG_5		35
#define LONG_6		36
#define LONG_7		37
#define LONG_8		38
#define LONG_9		39

#define AUTO_0 		50
#define AUTO_1 		51
#define AUTO_2 		52
#define AUTO_3 		53
#define AUTO_4 		54
#define AUTO_5 		55
#define AUTO_6 		56
#define AUTO_7 		57
#define AUTO_8 		58
#define AUTO_9 		59

#define LED_INIT 	69
#define LED_ON 		70
#define LED_OFF 	71
extern int status;
extern int ledstatus;

#endif /* INC_GLOBAL_H_ */
