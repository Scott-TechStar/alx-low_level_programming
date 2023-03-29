#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2 -ve, If str1 == str2, 0.
 * If str1 > str2 +ve
 */
int _strcmp(char *s1, char *s2)
{
  int len = 0;
while (s1[len] != '\0' && s2[len] != '\0')
{
if (s1[len] != s2[len])
{
return (s1[len] - s2[len]);
}
len++;
}
return (0);
}
