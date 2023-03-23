#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if letter is uppercase
 *
 * @c: Input Integer
 *
 * Return: Return 1 if uppercase else 0
 */
int _isupper(int c)
{
if (c > 65 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
