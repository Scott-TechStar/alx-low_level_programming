#include <stdio.h>
/**
 * main - sum oFibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fi1 = 0, fi2 = 1, sum;
float tsum;
while (1)
{
sum = fi1 + fi2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
tsum += sum;
fi1 = fi2;
fi2 = sum;
}
printf("%.0f\n", tsum);
return (0);
}
