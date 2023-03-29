#include "main.h"
/**
 * *_strncpy - Copies an input string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *srcint n)
{
int len = 0;
while (len < n && src[len] != '\0')
{
dest[len] = src[len];
len++;
}
while (len < n)
{
dest[len] = '\0';
len++;
}
return (dest);
}
