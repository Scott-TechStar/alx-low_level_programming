#include "main.h"
/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int i = 0, len = 0, num;
while (str[i++])
{
len++;
}
if ((len % 2) == 0)
{
num = len / 2;
}
else
{
num = (len + 1) / 2;
}
for (i = num; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
