#include "main.h"
/**
 * strlen - returns the length of a string.
 * @str: string
 * Return: the length of a string.
 */
int strlen(char *str)
{
if (*str == '\0')
{
return (0);
}
else
{
return (1 + strlen(str + 1));
}
}
/**
 * str_var - compares each character of the string.
 * @str: string
 * @val1: smallest iterator.
 * @val2: biggest iterator.
 * Return: .
 */
int str_var(char *str, int val1, int val2)
{
if (*(str + val1) == *(str + val2))
{
if (val1 == val2 || val1 == val2 + 1)
{
return (1);
}
return (0 + str_var(str, val1 + 1, val2 - 1));
}
return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (str_var(s, 0, strlen(s) - 1));
}
