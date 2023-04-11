#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array.
 * @width: Width of the 2-dimensional array.
 * @height: Height of the 2-dimensional array.
 *
 * Return: Null else memory space
 */
int **alloc_grid(int width, int height)
{
int **D2;
int dh, dw;
if (width <= 0 || height <= 0)
{
return (NULL);
}
D2 = malloc(sizeof(int *) * height);
if (D2 == NULL)
{
return (NULL);
}
for (dh = 0; dh < height; dh++)
{
D2[dh] = malloc(sizeof(int) * width);
if (D2[dh] == NULL)
{
for (; dh >= 0; dh--)
{
free(D2[dh]);
}
free(D2);
return (NULL);
}
}
for (dh = 0; dh < height; dh++)
{
for (dw = 0; dw < width; dw++)
{
D2[dh][dw] = 0;
}
}
return (D2);
}
