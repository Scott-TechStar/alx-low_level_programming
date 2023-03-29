#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters to uppercase.
 * @s: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *s)
{
int len = 0;
while (s[len] != '\0')
{
if (s[len] >= 'a' && s[len] <= 'z')
{
s[len] = s[len] - 32;
}
len++;
}
return (s);
}
