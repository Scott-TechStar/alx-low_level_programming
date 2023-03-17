#include <stdio.h>
/**
 * main - prints numbers 0 to 99.
 *
 * Return: Always 0(success)
 */
int main(void)
{
int num = 0;
while (num <= 99)
{
putchar(num / 10 + '0');
putchar(num % 10 + '0');
if (num != 99)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
