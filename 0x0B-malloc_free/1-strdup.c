#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space
 * @str: The string to be copied.
 * Return: Null else a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dup;
int i, size = 0;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
size++;
}
dup = malloc(sizeof(char) * (size + 1));
if (dup == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
dup[i] = str[i];
}
dup[size] = '\0';
return (dup);
}
