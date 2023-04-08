#include "main.h"
/**
 * *_strncat - Concatenates two strings
 *
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len = 0;
while (dest[i] != '\0')
{
i++;
}
while (len < n && src[len] != '\0')
{
dest[i] = src[len];
i++;
len++;
}
dest[i] = '\0';
return (dest);
}
