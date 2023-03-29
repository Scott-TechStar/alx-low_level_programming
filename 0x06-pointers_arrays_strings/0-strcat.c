#include "main.h"
#include <stdio.h>
/**
 * strcat - Concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, char *src)
{
int i = 0, len = 0;
while (dest[i++])
{
len++;
}
for (i = 0; src[i]; i++)
{
dest[len++] = src[i]
}
return (dest);
}
