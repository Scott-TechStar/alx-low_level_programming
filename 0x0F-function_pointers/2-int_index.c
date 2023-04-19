#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: The array of integers
 * @size: The size of the array.
 * @cmp: A pointer to the function
 *
 * Return: If no element matches or size <= 0 - -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int val;
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (val = 0; val < size; val++)
{
if (cmp(array[val]) != 0)
{
return (val);
}
}
return (-1);
}
