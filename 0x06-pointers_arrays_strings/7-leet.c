#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int count = 0, i = 0;
char *letters = "aeotlAEOTL";
char *num = "4307143071";
while (str[count] != '\0')
{
i = 0;
while (letters[i] != '\0')
{
if (str[count] == letters[i])
str[count] = num[i];
i++;
}
count++;
}
return (str);
}

