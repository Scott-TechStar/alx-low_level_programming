#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from n to 98
 *
 * @n: Input integer
 *
 * Return: Null
 */
void print_to_98(int n)
{
if (n < 98)
{
for (; n <= 98; n++)
{
_putchar("%d,", n);
}
}
else
{
for (; n >= 98; n--)
{
_putchar("%d,", n)
}
}
_putchar("\n");
}
