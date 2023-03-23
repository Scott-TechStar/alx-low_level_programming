#include "main.h"
/**
 * print_number - prints an integer
 *
 * @n: Input integer
 *
 * Return: void
 */
void print_number(int n)
{
unsigned int size = n;
if (n < 0)
{
n *= -1;
size = n;
_putchar('-');
}
size /= 10;
if (size != 0)
print_number(size);
_putchar((unsigned int) n % 10 + '0');
}
