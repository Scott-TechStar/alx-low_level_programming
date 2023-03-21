#include <stdio.h>
/**
 * main - Prints 1st 50 Fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long fi1 = 0, fi2 = 1, sum;
for (i = 0; i < 50; i++)
{
sum = fi1 + fi2;
printf("%lu", sum);
fi1 = fi2;
fi2 = sum;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
