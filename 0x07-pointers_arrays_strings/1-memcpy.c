#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: a pointer to @dest.
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0, int j = 0;
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
