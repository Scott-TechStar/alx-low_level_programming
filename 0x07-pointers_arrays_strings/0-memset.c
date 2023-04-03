#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to memory area @s.
 */
void *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
unsigned char *mem = s, size = b;
for (index = 0; index < n; index++)
{
mem[index] = size;
}
return (mem);
}
