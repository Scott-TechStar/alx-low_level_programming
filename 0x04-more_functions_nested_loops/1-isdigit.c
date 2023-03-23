#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for digits 0-9
 *
 * @c: ASCII code character
 *
 * Return: Return 1 if uppercase else return 0
 */
int _isdigit(int c)
{
if ((c > 48) && (c < 57))
{
return (1);
}
else
{
return (0);
}
}
