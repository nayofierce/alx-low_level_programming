#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 (Suceess)
 */
int main(void)
{
char a;
for ((a = 'z'); (a >= 'a');  a--)
{
putchar(a); /*print char in reverse*/
}
putchar('\n'); /*print new line*/
return (0);
}

