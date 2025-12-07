#include <xc.h>

// PIC18F4550 configuration bits
#pragma config FOSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config CP0 = OFF

#define _XTAL_FREQ 4000000    // 48 MHz oscillator

int main(void) {
    ADCON1 = 0x0F;
    TRISB = 0x00;  // PORTB output
    PORTB = 0x00;  // initialize PORTB

    while(1) {
        LATBbits.LATB0 = 1;   // turn LED on (RB0)
        __delay_ms(500);
        LATBbits.LATB0 = 0;   // turn LED off
        __delay_ms(500);
    }
    return 0;
}