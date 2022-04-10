/* ArcTrak firmware for the `r01`-hardware. */

#include <avr/io.h>
#include <util/delay.h>

/* Configure our MCU for entering low power mode, aka: bedtime. We do some
 * specifics:
 *
 * - Set all I/O pins to be inputs.
 * - Turn on all pull-ups on these I/O pins to prevent floating pins flapping
 *   the buffers and leaking current.
 * - Turn off the ADC. */
void lp_enter(void) {
    DDRB = 0xFF; PORTB = 0xFF;
    ADCSRA &= ~(1 << ADEN);
}

/* Exit low power mode, restore everything to what we need during processing
 * of data. */
void lp_exit(void) {
    DDRB = (1 << 5); PORTB = 0x00;
    ADCSRA |= (1 << ADEN);
}


int main(void) {
    // make the LED pin an output for PORTB5
    DDRB = 1 << 5;

    while (1) {
        _delay_ms(500);
        PORTB ^= 1 << 5;
    }

    return 0;
}
