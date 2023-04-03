#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: a pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
unsigned char *destination = dest;
const unsigned char *source = src;
for (index = 0; index < n; index++)
{
destination[index] = source[index];
}
return (dest);
}
