#include <stdio.h>

/**
 *main -Entry point
*
*Return: Always 0(Success)
*/

int main(void)
{
char l; /*Declaring statement*/
char u;

/*for lower case*/
for ((l = 'a'); (l = 'z'); (l++))
{
putchar(l);
}

/*for upper case*/
for ((u = 'A'); (u = 'Z'); (u++))
{
putchar (u);
}
putchar('\n');
}
