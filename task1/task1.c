#include<avr/io.h>
#include<util/delay.h>
void main()
{
unsigned char a[10]=[0x3f,0x06,0x5b,0xc7,0x76,0x6d,0x7d,0x07,0x7f,0x6f];
for(i=0,i<10,i++)
{
PORTD=a[i];
_delay_ms(1000);
}
}
