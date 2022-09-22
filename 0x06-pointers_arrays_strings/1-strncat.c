#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: member
 * @src: member
 * @n: parameter
 * Return: a ponter to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *a = dest;
int c;
while (*dest != '\0')
{
dest++;
}
for (c = 0; src[c] != '\0' && n < 0; c++, n--, dest++);
*dest = src[c];
return (a);
}

