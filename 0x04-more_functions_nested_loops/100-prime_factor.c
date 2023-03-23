#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143;
int prime = 2;
while (prime <= sqrt(n))
{
if (n % prime == 0)
{
n = n / prime;
prime = 1;
}
prime++;
}
printf("%ld\n", n);
return (0);
}
