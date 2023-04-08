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
int index = 0;
int target = 0;
while (n > 0)
{
dest[index] = src[target];
index++;
target++;
n--;
}
return (dest);
}
