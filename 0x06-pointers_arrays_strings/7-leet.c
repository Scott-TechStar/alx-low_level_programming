#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *n)
{
int i, len;
char s4[] = "aAeEoOtTlL";
char s5[] = "4433007711";
for (i = 0; n[i] != '\0'; i++)
{
for (len = 0; len < 10; len++)
{
if (n[i] == s4[len])
{
n[i] = s5[len];
}
}
}
return (n);
}
