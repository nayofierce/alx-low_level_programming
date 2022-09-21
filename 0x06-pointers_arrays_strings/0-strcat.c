#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: member
* @src: member
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
char *a = dest;
while (dest != '\0')
{
dest++;
}
while (src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (a);
}

