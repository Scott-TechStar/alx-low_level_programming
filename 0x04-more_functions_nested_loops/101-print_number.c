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
int c, th;
int s = 1;
int o = n % 10;
n /= 10;
c = n;
if (o < 0)
{
o *= -1, c *= -1, n *= -1;
_putchar('-');
}
if (c > 0)
{
while (c / 10 != 0)
{
c /= 10, s *= 10;
}
while (s > 0)
{
th = n / s;
_putchar('0' + th);
n -= th * s;
s /= 10;
}
}
_putchar('0' + o);
}
