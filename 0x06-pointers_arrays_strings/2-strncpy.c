#include "main.h"
 /**
  * _strncpy - copies a string
  * @dest: member
 * @src:member
 * @n: member
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] += src[i];
for (i = 0; i < n; i++)
;
return (dest);
}

