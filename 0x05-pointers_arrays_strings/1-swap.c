#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
int swp = *a;
*a = *b;
*b = swp;
}
