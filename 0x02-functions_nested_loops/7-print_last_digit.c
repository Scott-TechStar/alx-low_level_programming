#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Value of last digit
 *
 * @c: Input integer
 *
 * Return: Last digit
 */
int print_last_digit(int c)
{
int r;
r = c % 10;
if (r < 0)
{
_putchar(-r + 48);
}
else
{
_putchar(r + 48);
}
_putchar('\n');
}
