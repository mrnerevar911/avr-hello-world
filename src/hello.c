#include <avr/io.h>

int main(void) {

    DDRC = 0b0000001;
    PORTC = 0b00000000;

    while (1) {
        PORTC = 0b00000001;
    }
}