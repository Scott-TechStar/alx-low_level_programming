#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @size: Input int
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int a, b, sp;
if (size > 0)
{
for (b = 0; b < size; b++)
{
sp = size - b - 1;
for (a = 0; a < size; a++)
{
if (sp > a)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
