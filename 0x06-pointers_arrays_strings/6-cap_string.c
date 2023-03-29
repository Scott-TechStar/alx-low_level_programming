#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int tmp;
if (str[tmp] >= 'a' && str[tmp] <= 'z')
{
str[tmp] = str[tmp] - 32;
}
for (tmp = 0; str[tmp] != 0; tmp++)
{
switch str[tmp]
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
if (str[tmp + 1] > 96 && str(tmp + 1 < 123))
{
str[tmp + 1] = str[tmp + 1] - 32;
}
}
}
return (str);
}
