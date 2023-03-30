#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @n: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *n)
{
int j = 0;
while (n[j])
{
while ((n[j] >= 'a' && n[j] <= 'z') || (n[j] >= 'A' && n[j] <= 'Z'))
{
if ((n[j] > 'm' && n[j] <= 'z') || (n[j] > 'M' && n[j] <= 'Z'))
{
n[j] -= 13;
break;
}
n[j] += 13;
break;
}
j++;
}
return (n);
}
