#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @j: the integer to be inputted
 * Return: The absolute value of an integer
 */
int _abs(int)
{
int j;
if (j < 0)
{
_putchar(-j);
}
else if (j >= 0)
{
_putchar(j);
}
_putchar('\n');
return (0);
}
