#include "main.h"
#include <stdio.h>
/**
 * *_strcat - Concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int len = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[len] != '\0')
{
dest[i] = src[len];
i++;
len++;
}
dest[i] = '\0';
return (dest);
}
