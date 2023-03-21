#include <stdio.h>
#include <main.h>
#include <stdlib.h>
#include <string.h>
/**
 * Main - Function to print lowercase letters x10
 *
 * Return: Always 0(success)
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
int l, l10;
for (l = 97; l < 123; l++)
{
for (l10 = 0; l10 < 10; l10++)
{
l10 = l;
putchar(l10);
}
}
putchar('\n');
return (0);
}
