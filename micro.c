#include <mega128.h>
#include <delay.h>
#include "micro.h"

void main(void) {
    PORTA = 0xff; DDRA = 0xff;
    while(1) {
        count();
        delay_ms(1);
    }
}