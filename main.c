// Project name : Blinking LED for Atmega8
// Compile Date : 2/2/2011 Time : (16:21)
// Designed By  : GEEKSLAB TECHNOLOGIES 
//                http://www.geekslab.in
/* Program for "BLINKING LED" 
 ___________________________________________________
Connection settings of Kit

PWM LED---->PB1
RIGHT MOTOR(+)------->PB1
RIGHT MOTOR(-)------->PB2
LEFT MOTOR(-)-------->PB3
LEFT MOTOR(+)-------->PB4
BUZZER---------------->PB0
LDR------------------->PC5
BOOTLODer Condition Check-----PC2(if 0 bootler section else program execution
							  section of Flash memory)
RESET----------------->PC6
Crystal Ossilator----PB6 and PB7
VB=Battery Supply
VCC=regulated 5V+
Gnd=ground(0V)
VR1=Contrast of LCD
*/

#include<avr/io.h>
#include<util/delay.h>

void wait(float x)
{
for(int i=0;i<(int)(x*1302);i++)
_delay_loop_1(0);
}


int main(void)
    

 {

DDRB=0b11111111;  // PB1 of PORT B is set as output connected with PWM LED  
 while(1)
    {
    PORTB=0b00100000;  //PWM LED at PB1 set ON 
    wait(20);
	
    PORTB=0b00010000;  //PWM LED at PB1 set ON 
    wait(20);
	
    PORTB=0b00001000;
    wait(20);
	
	PORTB=0b00000100;
    wait(20);
	}
 }


