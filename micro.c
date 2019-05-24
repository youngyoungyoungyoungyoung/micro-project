#include <mega128.h>
#include <delay.h>

void main(void)
{
    PORTA = 0xff; DDRA = 0xff;
    while(1)
        delay_ms(1);
}