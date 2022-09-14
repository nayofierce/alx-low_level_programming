#include "main.h"
/**
 * print_sign - Short decription, single line
 * @n: contains value to be compared
 * Return: Always 0
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
}
