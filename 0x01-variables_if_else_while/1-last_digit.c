#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
int n, lastDigit;
lastDigit = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastDigit > 5)
{
printf("Last digit of ", n, "is", lastDigit, "and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("Last digit of", n, "is", lastDigit, "and is 0\n");
}
else if (lastDigit < 6, lastDigit != 0)
{
printf("Last digit of", n, "is", lastDigit, "and is less than 6 and not 0\n");
}
return (0);
}
