#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Null else a pointer to space in memory.
 */
char *str_concat(char *s1, char *s2)
{
char *c_str;
int i, con_i = 0, size = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] || s2[i]; i++)
{
size++;
}
c_str = malloc(sizeof(char) * size);
if (c_str == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
c_str[con_i++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
c_str[con_i++] = s2[i];
}
return (c_str);
}
