/*
 * HefnyCopter2.cpp
 *
 * Created: 8/13/2012 6:30:08 PM
 *  Author: hefny
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/delay.h>

#include "Include/GlobalValues.h"
#include "Include/HefnyCopter2.h"
#include "Include/IO_config.h"
#include "Include/LED.h"
#include "Include/Beeper.h"
#include "Include/Acc_Sensor.h"
#include "Include/ADC_PORT.h"
#include "Include/Gyro_Sensor.h"
#include "Include/GlobalValues.h"
#include "Include/LCD.h"
#include "Include/Motor.h"
#include "Include/KeyBoard.h"
#include "Include/Menu.h"

static const prog_char versionNum[] = "Version 0.1";
static const prog_char versionAuthor[] = "HefnyCopter2";



void Setup (void)
{
	
	RX_ROLL_DIR 		= INPUT;
	RX_PITCH_DIR 		= INPUT;
	RX_COLL_DIR   		= INPUT;
	RX_YAW_DIR   	 	= INPUT;
	RX_AUX_DIR   	 	= INPUT;

	// Motors
	M1_DIR = OUTPUT;
	M2_DIR = OUTPUT;
	M3_DIR = OUTPUT;
	M4_DIR = OUTPUT;
	M5_DIR = OUTPUT;
	M6_DIR = OUTPUT;
	M7_DIR = OUTPUT;
	M8_DIR = OUTPUT;
	
	Buzzer_DIR = OUTPUT;
	LED_Orange_DIR = OUTPUT;
	
	
	// Sensors
	V_BAT  = INPUT;
	
	
	// Timers
	TCCR1A = 0;	//Set timer 1 to run at 2.5MHz
	TCCR1B = 0;
	TCCR1C = 0;
	
	
	// enable interrupts
	EICRA  = _BV(ISC00) | _BV(ISC10) | _BV(ISC20);	// any edge on INT0, INT1 and INT2
	EIMSK  = _BV(INT0)  | _BV(INT1)  | _BV(INT2);	// enable interrupt for INT0, INT1 and INT2
	EIFR   = _BV(INTF0) | _BV(INTF1) | _BV(INTF2);	// clear interrupts
		
		//PCICR |= _BV(PCIE1) | _BV(PCIE3);				// enable PCI1 and PCI3
		//PCMSK1 = _BV(PCINT8);							// enable PCINT8 (AUX) -> PCI1
		//PCMSK3 = _BV(PCINT24);							// enable PCINT24 (THR) -> PCI3
		//PCIFR  = _BV(PCIF1) | _BV(PCIF3);				// clear interrupts

	ADCPort_Init();
	Gyro_Init();
	Acc_Init();
	KeyBoard_Init();
	menuInit();
	
		
	lcdInit();
	lcdClear();
	//lcdWriteGlyph_P(&glyLogo, 0);
	lcdSetPos(1, 0);
	lcdWriteString_P(versionNum);
	lcdSetPos(3, 0);
	lcdWriteString_P(versionAuthor);
	
	sei();
	
	_delay_ms(800);
    
}



int main(void)
{
	
	Setup();
	
    while(1)
    {
        //TODO:: Please write your application code 
		Loop();
    }
}


void Loop(void)
{
	
	menuShow();


	
}	
