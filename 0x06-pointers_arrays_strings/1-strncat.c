#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: member
 * @src: member
 * n: parameter
 * Return: a ponter to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *a = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
n = sizeof (src);
if(*src != '0')
{
*dest = n + '1';
}
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (a);
}

