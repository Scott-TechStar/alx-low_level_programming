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
char i;
for (i = '0'; i <= n; i++)
{
_putchar(32);
}
_putchar('\n');
}
