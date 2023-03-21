#include "main.h"
#include <stdio.h>
/**
* times_table - prints the n times table
*
* @n: Input integer
*
* Return: no return
*/
void ptint_times_table(int n)
{
int l, m, p;
if ((n > 0) && (n < 15))
{
for (l = 0; l <= 9; l++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
p = l * m;
_putchar(44);
_putchar(32);
if (n <= 9)
{
_putchar(32);
_putchar(32);
_putchar(p + 48);
}
else if (n <= 99)
{
_putchar(32);
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
else
{
_putchar(((p / 100) % 10) + 48);
_putchar(((p / 10) % 10) + 48);
_putchar((p % 10) + 48);
}
}
_putchar('\n');
}
}
}
