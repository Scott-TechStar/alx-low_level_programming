#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: Number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: Null else a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
char *str;
int arg, len, i, size = ac;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (arg = 0; arg < ac; arg++)
{
for (len = 0; av[arg][len]; len++)
{
size++;
}
}
str = malloc(sizeof(char) * size + 1);
if (str == NULL)
{
return (NULL);
}
i = 0;
for (arg = 0; arg < ac; arg++)
{
for (len = 0; av[arg][len]; len++)
{
str[i++] = av[arg][len];
}
str[i++] = '\n';
}
str[size] = '\0';
return (str);
}
