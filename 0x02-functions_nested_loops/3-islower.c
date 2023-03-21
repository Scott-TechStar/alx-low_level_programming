#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if letter is lowercase
 *
 * @c: ASCII character code
 *
 * Return: Return 1 if lowercase else return 0
 */
int _islower(int c)
{
if((c >= 97) && (c < 123))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
