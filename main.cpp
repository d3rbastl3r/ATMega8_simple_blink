/**
 * A minimal blink example on port B0
 *
 * @author Igor Martens
 * @since 06.10.2018
 */

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

void setup() {
    DDRB |= (1 << DDB0); // Setup the Output fon port B0
}

int main(void) {
    setup();

    while(1) {
        PORTB |= (1<<PB0);
		_delay_ms(500);

		PORTB &= ~(1<<PB0);
		_delay_ms(500);
    }

    return 0;
}
