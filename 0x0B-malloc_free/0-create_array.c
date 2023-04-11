#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be initialized.
 * @c: char to intialize the array with.
 *
 * Return: Null else a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
