#include<avr/io.h>
#include<util/delay.h>
void cmd(unsigned char x)
{
PORTD&=(~0X80);
PORTD&=(~0X40);
PORTB=x;
PORTD|=(0X20);
_delay_ms(100);
PORTD&=(~0X20);
}

void dat(unsigned char x)
{
PORTD|=(0X80);
PORTD&=(~0X40);
PORTB=x;
PORTD|=(0X20);
_delay_ms(100);
PORTD&=(~0X20);

}
void print(unsigned int x )
{
unsigned int  y ,z =1;
y=x;
while(y>9)
{
z=z*10;
y=y/10;
}
while(z>0)
{
dat((x/z)+48);
x=x%z;
z=z/10;
}


}

void main()

{

DDRD= DDRB=0XFF;
cmd(0X38);
cmd(0X0E);
cmd(0X06);
cmd(0X01);
cmd(0XCF);
print(982);
main();


}

