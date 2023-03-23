#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */
void print_diagonal(int n)
{
int dia = 0;
int sp = 0;
if (n > 0)
{
while (dia < n)
{
while (sp < dia)
{
_putchar(' ');
sp++;
}
dia++;
sp = 0;
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
