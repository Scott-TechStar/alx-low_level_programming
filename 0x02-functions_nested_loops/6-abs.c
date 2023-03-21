#include "main.h"
#include <stdio.h>
/**
 * _abs - Absolute value of integer
 *
 * @n: Integer
 *
 * Return: Absolute value
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
_putchar('\n');
}
