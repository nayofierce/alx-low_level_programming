#include <stdio.h>

/**
 *main -Entry point
*
*Return: Always 0(Success)
*/

int main(void)
{
char i; /*Declaring statement*/
char y;
/*for lower case*/
for (i = 'a'; i = 'z'; i++)
{
putchar(i);
}
/*for upper case*/
for (y = 'A'; y = 'Z'; y++)
{
putchar (y);
}
putchar('\n');
}
