#include <stdio.h>
#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: Always 0(success)
 */
int main(void)
{
int a;
char c[] = "_putchar";
for (a = 0; a < 8; a++)
{
_putchar(c[a]);
}
_putchar('\n');
return (0);
}
