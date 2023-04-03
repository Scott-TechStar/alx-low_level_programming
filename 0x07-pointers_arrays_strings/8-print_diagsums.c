#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int index;
int diag1 = 0, diag2 = 0;
for (index = 0; index < size; index++)
{
diag1 += a[index];
a += size;
}
a -= size;
for (index = 0; index < size; index++)
{
diag2 += a[index];
a -= size;
}
printf("%d, %d\n", diag1, diag2);
}
