#include <stdio.h>
/**
 * main - prints base 10 numbers and new line
 *
 * Return: 0
 */
int main(void)
{
int john;
for (john = 0; john < 10; john++)
{
	putchar(john + '0');
}
putchar('\n');
return (0);
}
