#include "main.h"
/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 *
 * Return: Nothing
 */
void print_number(int n)
{
unsigned int tmp = n;
if (n < 0)
{
_putchar('-');
tmp = -tmp;
} 
if ((tmp / 10) > 0)
{
print_number(tmp / 10);
}
_putchar((tmp % 10) + '0');
}
