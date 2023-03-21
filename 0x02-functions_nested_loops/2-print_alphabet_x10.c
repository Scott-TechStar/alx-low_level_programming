#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * Print_alphabet_x10 - print lowercase letters x10
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
int l, l10;
for (l10 = 0; l10 < 9; l10++)
{
for (l = 97; l < 123; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
