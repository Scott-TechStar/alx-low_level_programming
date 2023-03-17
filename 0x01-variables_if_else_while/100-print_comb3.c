#include <stdio.h>
/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
int m;
int n;
for (m = 0; m <= 9; m++)
{
for (n = m + 1; n <= 9; n++)
{
putchar(m + '0');
putchar(n + '0');
if (m < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
