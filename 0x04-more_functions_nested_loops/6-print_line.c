#include "main.h"
#include <stdio.h>
/**
 * print_line - print line
 *
 * @n: size of integer -
 *
 * Return: null
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
