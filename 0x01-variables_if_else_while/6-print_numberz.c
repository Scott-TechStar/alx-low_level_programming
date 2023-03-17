#include <stdio.h>
/**
 * main - prints base 10 numbers and new line
 *
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
