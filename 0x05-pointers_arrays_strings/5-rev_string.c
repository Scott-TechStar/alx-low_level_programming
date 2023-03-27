#include "main.h"
/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int len = 0, i = 0;
char swp;
while (s[i++])
{
len++;
}
for (i = len - 1; i >= len / 2; i--)
{
swp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = swp;
}
}
