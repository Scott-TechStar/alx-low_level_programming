#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Every minute
 *
 * Return: Null
 */
void jack_bauer(void)
{
int hr1, hr2, min1, min2;
for (hr1 = 48; hr1 <= 50; hr1++)
{
for (hr2 = 48; hr2 <= 57; hr2++)
{
for (min1 = 48; min1 <= 53; min1++)
{
for (min2 = 48; min2 <= 57; min2++)
{
if ((hr1 >= 50) && (hr2 >= 52))
{
break;
} 
_putchar(hr1);
_putchar(hr2);
_putchar(58);
_putchar(min1);
_putchar(min2);
_putchar('\n');
}
}
}
}
}
