#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 *Description: program that prints the alphabets int lowercase 10 times
 *followed by a new line
 *
 *Return: Exit int function with an int 0
 */
void print_alphabet_x10(void)
{
int count = 0;
char i;
while (count++ <= 9)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
