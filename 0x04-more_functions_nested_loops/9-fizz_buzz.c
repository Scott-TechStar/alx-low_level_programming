#include <stdio.h>
/**
 * main - Prints fizz and buzz
 *
 * Return: Always 0(success)
 */
int main(void)
{
int c;
for (c = 1; c < 100; c++)
{
if (c % 3 == 0 && c % 5 == 0)
{
printf("FizzBuzz ");
}
else if (c % 5 == 0)
{
if (c == 100)
{
printf("Buzz");
printf("\n");
}
else
{
printf("Buzz ");
}
}
else if (c % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", c);
}
}
}
