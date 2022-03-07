/*
 * marioTheme.c
 *
 * Created: 2/16/2017 10:16:17 AM
 *  Author: Student
 */


#include <avr/io.h>
#include <util/delay.h>
#include <math.h>

void delaySet(int a);

int main(void)
{
    DDRB = 0xFF;
	while(1)
	{
   	 
   	 /*
   	 frequency = 660 length = 100ms delay 150ms
   	 */
   	 for (int i = 0; i < 66; i++)
   	 {
   		 delaySet(758);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 660 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 66; i++)
   	 {
   		 delaySet(758);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 660 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 66; i++)
   	 {
   		 delaySet(758);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 510 length = 100ms delay 100ms
   	 */
   	 for (int i = 0; i < 51; i++)
   	 {
   		 delaySet(980);
   	 }
   	 _delay_ms(100);
   	 /*
   	 frequency = 660 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 66; i++)
   	 {
   		 delaySet(758);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 770 length = 100ms delay 550ms
   	 */
   	 for (int i = 0; i < 77; i++)
   	 {
   		 delaySet(649);
   	 }
   	 _delay_ms(550);
   	 /*
   	 frequency = 380 length = 100ms delay 575ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 delaySet(1316);
   	 }
   	 _delay_ms(575);
   	 
   	 
   	 
   	 
   	 /*
   	 frequency = 510 length = 100ms delay 450ms
   	 */
   	 for (int i = 0; i < 51; i++)
   	 {
   		 delaySet(980);
   	 }
   	 _delay_ms(450);
   	 /*
   	 frequency = 380 length = 100ms delay 575ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 delaySet(1316);
   	 }
   	 _delay_ms(575);
   	 /*
   	 frequency = 320 length = 100ms delay 500ms
   	 */
   	 for (int i = 0; i < 32; i++)
   	 {
   		 delaySet(1562);
   	 }
   	 _delay_ms(500);
   	 /*
   	 frequency = 440 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 44; i++)
   	 {
   		 delaySet(1136);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 480 length = 80ms delay 330ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 delaySet(1042);
   	 }
   	 _delay_ms(330);
   	 /*
   	 frequency = 450 length = 100ms delay 150ms
   	 */
   	 for (int i = 0; i < 45; i++)
   	 {
   		 delaySet(1111);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 430 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 43; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1163);
   		 PORTB = 0x00;
   		 _delay_us(1163);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 380 length = 100ms delay 200ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1316);
   		 PORTB = 0x00;
   		 _delay_us(1316);
   	 }
   	 _delay_ms(200);
   	 /*
   	 frequency = 660 length = 80ms delay 200ms
   	 */
   	 for (int i = 0; i < 53; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(758);
   		 PORTB = 0x00;
   		 _delay_us(758);
   	 }
   	 _delay_ms(200);
   	 /*
   	 frequency = 760 length = 50ms delay 200ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(658);
   		 PORTB = 0x00;
   		 _delay_us(658);
   	 }
   	 _delay_ms(200);
   	 /*
   	 frequency = 860 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 86; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(581);
   		 PORTB = 0x00;
   		 _delay_us(581);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 700 length = 80ms delay 150ms
   	 */
   	 for (int i = 0; i < 70; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(714);
   		 PORTB = 0x00;
   		 _delay_us(714);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 760 length = 50ms delay 350ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(658);
   		 PORTB = 0x00;
   		 _delay_us(658);
   	 }
   	 _delay_ms(350);
   	 /*
   	 frequency = 660 length = 80ms delay 300ms
   	 */
   	 for (int i = 0; i < 53; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(758);
   		 PORTB = 0x00;
   		 _delay_us(758);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 520 length = 80ms delay 150ms
   	 */
   	 for (int i = 0; i < 42; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(962);
   		 PORTB = 0x00;
   		 _delay_us(962);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 580 length = 80ms delay 150ms
   	 */
   	 for (int i = 0; i < 46; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(862);
   		 PORTB = 0x00;
   		 _delay_us(862);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 480 length = 80ms delay 500ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1042);
   		 PORTB = 0x00;
   		 _delay_us(1042);
   	 }
   	 _delay_ms(500);
   	 /*
   	 frequency = 510 length = 100ms delay 450ms
   	 */
   	 for (int i = 0; i < 51; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(980);
   		 PORTB = 0x00;
   		 _delay_us(980);
   	 }
   	 _delay_ms(450);
   	 /*
   	 frequency = 380 length = 100ms delay 575ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1316);
   		 PORTB = 0x00;
   		 _delay_us(1316);
   	 }
   	 _delay_ms(575);
   	 /*
   	 frequency = 320 length = 100ms delay 500ms
   	 */
   	 for (int i = 0; i < 32; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1562);
   		 PORTB = 0x00;
   		 _delay_us(1562);
   	 }
   	 _delay_ms(500);
   	 /*
   	 frequency = 440 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 44; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1136);
   		 PORTB = 0x00;
   		 _delay_us(1136);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 480 length = 80ms delay 330ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1042);
   		 PORTB = 0x00;
   		 _delay_us(1042);
   	 }
   	 _delay_ms(330);
   	 /*
   	 frequency = 450 length = 100ms delay 150ms
   	 */
   	 for (int i = 0; i < 45; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1111);
   		 PORTB = 0x00;
   		 _delay_us(1111);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 430 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 43; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1163);
   		 PORTB = 0x00;
   		 _delay_us(1163);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 380 length = 100ms delay 200ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1316);
   		 PORTB = 0x00;
   		 _delay_us(1316);
   	 }
   	 _delay_ms(200);
   	 /*
   	 frequency = 660 length = 80ms delay 200ms
   	 */
   	 for (int i = 0; i < 53; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(758);
   		 PORTB = 0x00;
   		 _delay_us(758);
   	 }
   	 _delay_ms(200);
   	 /*
   	 frequency = 760 length = 50ms delay 200ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(658);
   		 PORTB = 0x00;
   		 _delay_us(658);
   	 }
   	 _delay_ms(200);
   	 /*
   	 frequency = 860 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 86; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(581);
   		 PORTB = 0x00;
   		 _delay_us(581);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 700 length = 80ms delay 150ms
   	 */
   	 for (int i = 0; i < 70; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(714);
   		 PORTB = 0x00;
   		 _delay_us(714);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 760 length = 50ms delay 350ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(658);
   		 PORTB = 0x00;
   		 _delay_us(658);
   	 }
   	 _delay_ms(350);
   	 /*
   	 frequency = 660 length = 80ms delay 300ms
   	 */
   	 for (int i = 0; i < 53; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(758);
   		 PORTB = 0x00;
   		 _delay_us(758);
   	 }
   	 _delay_ms(300);
   	 /*
   	 frequency = 520 length = 80ms delay 150ms
   	 */
   	 for (int i = 0; i < 42; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(962);
   		 PORTB = 0x00;
   		 _delay_us(962);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 580 length = 80ms delay 150ms
   	 */
   	 for (int i = 0; i < 46; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(862);
   		 PORTB = 0x00;
   		 _delay_us(862);
   	 }
   	 _delay_ms(150);
   	 /*
   	 frequency = 480 length = 80ms delay 500ms
   	 */
   	 for (int i = 0; i < 38; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1042);
   		 PORTB = 0x00;
   		 _delay_us(1042);
   	 }
   	 _delay_ms(500);
   	 
   	 
   	 
   	 
   	 /*
   	 frequency = 500 length = 100ms delay 300ms
   	 */
   	 for (int i = 0; i < 100; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(1000);
   		 PORTB = 0x00;
   		 _delay_us(100);
   	 }
   	 _delay_ms(300);
   	 
   	 
   	 
   	 
   	 
   	 /*
   	 frequency = 760 length = 100ms delay 100ms
   	 */
   	 for (int i = 0; i < 76; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(658);
   		 PORTB = 0x00;
   		 _delay_us(658);
   	 }
   	 _delay_ms(100);
   	 /*
   	 frequency = 720 length = 100ms delay 150ms
   	 */
   	 for (int i = 0; i < 72; i++)
   	 {
   		 PORTB = 0xFF;
   		 _delay_us(695);
   		 PORTB = 0x00;
   		 _delay_us(695);
   	 }
   	 _delay_ms(150);
	}
}

void delaySet(int a){
    int b = a;
    PORTB = 0x02;
    while (a >= 0){
   	 _delay_us(1);
   	 a= a - 6;
    }
    PORTB = 0x00;
    while (b >= 0){
   	 _delay_us(1);
   	 b= b - 6;
    }
}
