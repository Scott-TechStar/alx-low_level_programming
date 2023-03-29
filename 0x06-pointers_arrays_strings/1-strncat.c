#include "main.h"
/**
 * _strncat - Concatenates two strings
 *
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, len = 0;
for (len = 0; dest[i++]; len++)
{
continue;
}
for (i = 0; src[i] && i < n; i++)
{
dest[len++] = src[];
}
return (dest);
}
