#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase letters
 *
 * @c: ASCII code character
 *
 * Return: Return 1 if uppercase else return 0
 */
int _isupper(int c)
{
if ((c >= 65) && (c < 91))
{
return (1);
}
else
{
return (0);
}
}
