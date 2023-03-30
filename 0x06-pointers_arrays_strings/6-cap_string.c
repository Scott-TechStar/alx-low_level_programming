#include "main.h"
#include <stdio.h>
/**
 * *cap_string - Capitalizes all words of a string.
 * @n: The string to be capitalized
 *
 * Return: A pointer to the changed string.
*/
char *cap_string(char *n)
{
int len = 0, i;
int j = 13;
char tmp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (n[len])
{
i = 0;
while (i < j)
{
if ((len == 0 || n[len - 1] == tmp[i]) && (n[len] >= 97 && n[len] <= 122))
{
n[len] -= 32;
}
i++;
}
len++;
}
return (n);
}
