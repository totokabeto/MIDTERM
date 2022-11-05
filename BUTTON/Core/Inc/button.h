/*
 * button.h
 *
 *  Created on: Sep 21, 2022
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag;
extern int button2_flag;
extern int button2_flag2;
extern int button3_flag;
extern int button3_flag2;

int isButton1Pressed();

int isButton2PressedLong();

void getKeyInput();
void getKeyInput2();
void getKeyInput3();

#endif /* INC_BUTTON_H_ */
