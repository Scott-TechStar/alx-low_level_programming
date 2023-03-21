#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for uppercase letters
 *
 * Return: Return 1 if uppercase else return 0
 */
int _isalpha(int c)
{
if ((c >= 65) && (c < 91))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
