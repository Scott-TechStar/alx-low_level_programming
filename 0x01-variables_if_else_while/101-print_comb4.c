#include <stdio.h>
/**
 * main - prints all possible different combinations of 3 digits.
 *
 * Return: Always 0(success)
 */
int main(void)
{
int i = 0;
int m;
int n;
int o;
while (i <= 999)
{
m = (i / 100 + '0');
n = (i / 10 % 10 + '0');
o = (i % 10 + '0');
if ((m < n)&&(n < o))
{
putchar(m);
putchar(n);
putchar(o);
if (i != 789)
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
