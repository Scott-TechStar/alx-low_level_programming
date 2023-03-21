#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_alphabet - Funtions to print lowecase leters
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
int l;
for (l = 97; l < 123; l++)
{
_putchar(l);
}
_putchar('\n');
}
