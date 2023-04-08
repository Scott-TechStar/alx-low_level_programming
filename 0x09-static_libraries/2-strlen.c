#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string.
 * @s: Input string
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
int  len = 0;
while (*s++)
{
len++;
}
return (len);
}
