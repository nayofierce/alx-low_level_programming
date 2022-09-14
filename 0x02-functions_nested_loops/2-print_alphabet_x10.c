#include "main.h"
/**
 * print_alphabet - Entry point
 *
 *Description: program that prints the alphabets 10 times
 *followed by a new line
 *
 *Return: Exit int function with an int 0
 */
void print_alphabet_x10(void)
{
int i;
for ( i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
