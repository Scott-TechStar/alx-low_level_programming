#include "main.h"
/**
 * print_square - Prints a square
 *
 * @size: Input Int
 *
 * Return: null
 */
void print_square(int size)
{
int l = 0;
int w = 0;
if (size > 0)
{
while (l < size)
{
while (w < size)
{
_putchar('#');
w++;
}
w = 0;
l++;
_putchar('\n');
}
}
else
_putchar('\n');
}
