#include "main.h"
#include <stdio.h>
/**
 * print_sign - checks if n is greater, less than or zero
 *
 * @n: Integer
 *
 * Return: Return 1 if >0, -1 if less and 0 if 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
