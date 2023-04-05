#include "main.h"
/**
 * root - returns the natural square root of a number.
 * @y: input number.
 * @x: iterator.
 * Return: square root or -1.
 */
int root(int y, int x)
{
if (x % (y / x) == 0)
{
if (x * (y / x) == y)
{
return (x);
}
else
{
return (-1);
}
}
return (0 + root(y, x + 1));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (root(n, 2));
}
