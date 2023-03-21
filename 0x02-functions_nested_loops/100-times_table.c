#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints n times table
 *
 * @n: Input integer
 */
void print_times_table(int n)
{
int l, m, p;
if (n >= 0 && n <= 15)
{
for (l = 0; l <= n; l++)
{
_putchar(48);
for (m = 1; m <= n; m++)
{
_putchar(44);
_putchar(32);
p = l * m;
if (p <= 99)
_putchar(32);
if (p <= 9)
_putchar(32);
if (p >= 100)
{
_putchar((p / 100) + 48);
_putchar(((p / 10)) % 10 + 48);
}
else if (p <= 99 && p >= 10)
{
_putchar((p / 10) + 48);
}
_putchar((p % 10) + 48);
}
_putchar('\n');
}
}
}
