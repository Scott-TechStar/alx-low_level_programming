#include <stdio.h>
#include <main.h>
#include <string.h>
#include <stdlib.h>
/**
 * Main - Funtions to print lowecase leters
 *
 * Return: Always 0(success)
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int l;
for (l = 97; l < 123; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
