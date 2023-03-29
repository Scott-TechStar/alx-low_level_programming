#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string.
 * @n: The string to be capitalized
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *n)
{
int tmp = 0;
while (n[tmp])
{
while (!(n[tmp] >= 'a' && n[tmp] <= 'z'))
{
tmp++;
}
if (n[tmp - 1] == ' ' || n[tmp - 1] == '\t' || n[tmp- 1] == '\n' || n[tmp - 1] == ',' || n[tmp - 1] == ';' || n[tmp - 1] == '.' || n[tmp - 1] == '!' || n[tmp - 1] == '?' || n[tmp - 1] == '"' || n[tmp - 1] == '(' || n[tmp - 1] == ')' || n[tmp - 1] == '{' || n[tmp - 1] == '}' || tmp == '\0')
{
n[tmp] -= 32;
}
tmp++;
}
return (n);
}
