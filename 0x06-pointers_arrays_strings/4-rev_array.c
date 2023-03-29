#include "main.h"
/**
 * reverse_array - Reverses the content of an array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int len, temp;
for (len = 0; len < n--; len++)
{
temp = a[len];
a[len] = a[n];
a[n] = temp;
}
}
