/*
 * bcdDisplay.asm
 *
 *  Created: 11/15/2016 7:24:59 PM
 *   Author: Student
 */ 


 .ORG 0
LDI R16, 0x00;

OUT DDRB, R16;
OUT DDRD, R16;
LDI R16, 0xFF;
OUT DDRA, R16;
OUT DDRC, R16;
LDI R16, 0xF0;
LDI R17, 0x0F;
Repeat:
	LDI R23, 0x00;
	LDI R22, 0x01;
	OUT PORTA, R22;
	NOP
	NOP
	OUT PORTC, R23;
	LDI ZL, LOW(AATBS<<1);
	LDI ZH, HIGH(AATBS<<1);
	IN R18,PINB;
	AND R18, R17;
	ADD ZL, R18;
	LPM R20, Z;
	LDI ZL, LOW(AATBS<<1);
	LDI ZH, HIGH(AATBS<<1);
	OUT PORTC, R20;
	

	LDI R22, 0x02;
	OUT PORTA, R22;
	NOP
	NOP
	OUT PORTC, R23;
	IN R18,PINB;
	AND R18, R16;
	SWAP R18;
	ADD ZL, R18;
	LPM R20, Z;
	LDI ZL, LOW(AATBS<<1);
	LDI ZH, HIGH(AATBS<<1);
	OUT PORTC, R20;
	

	LDI R22, 0x04;
	OUT PORTA, R22;
	NOP
	NOP
	OUT PORTC, R23;
	IN R18,PIND;
	AND R18, R17;
	ADD ZL, R18;
	LPM R20, Z;
	LDI ZL, LOW(AATBS<<1);
	LDI ZH, HIGH(AATBS<<1);
	OUT PORTC, R20;
	

	LDI R22, 0x08;
	OUT PORTA, R22;
	NOP
	NOP
	OUT PORTC, R23;
	IN R18,PIND;
	AND R18, R16;
	SWAP R18;
	ADD ZL, R18;
	LPM R20, Z;
	LDI ZL, LOW(AATBS<<1);
	LDI ZH, HIGH(AATBS<<1);
	OUT PORTC, R20;
	
	RJMP Repeat


.org 0xFF
 AATBS:
	.DB 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00