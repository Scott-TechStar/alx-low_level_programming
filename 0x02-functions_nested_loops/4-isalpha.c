#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for uppercase letters
 *
 * @c: ASCII code character
 * Return: Return 1 if uppercase else return 0
 */
int _isalpha(int c)
{
if ((c >= 65) && (c < 91) || (c >= 97) && (c < 123))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
