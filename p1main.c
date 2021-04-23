/*
 * File:   p1main.c
 * Author: raulm
 *
 * Created on 19 de marzo de 2021, 04:51 PM
 */

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB = 0xFF;
    while (1) {
            PORTB = 0x01;
            _delay_ms(1000);
           PORTB = 0x00;
           _delay_ms(1000);

    }
}
