#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int index = 0;
while (n > 0)
{
s[index] = b;
index++;
n--;
}
return (s);
}
