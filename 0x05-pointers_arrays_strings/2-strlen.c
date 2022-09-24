#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: member
 * Return: number of bytes in the string
 */
int _strlen(char *s)
{
int d;
for (d = 0; s[d] != '\0'; d++)
;
return (d);
}
