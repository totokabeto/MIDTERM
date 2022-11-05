/*
 * software_timer.h
 *
 *  Created on: Oct 5, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag1;
extern int timer_flag2;
extern int timer_flag3;
extern int timer_flag4;
void timerRun();
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
