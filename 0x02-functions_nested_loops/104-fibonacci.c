#include <stdio.h>
/**
 * main - 1St 98 fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long fi1 = 0, fi2 = 1, sum;
unsigned long fi1_b1, fi1_b2, fi2_b1, fi2_b2;
unsigned long b1, b2;
for (i = 0; i < 92; i++)
{
sum = fi1 + fi2;
printf("%lu, ", sum);
fi1 = fi2;
fi2 = sum;
}
fi1_b1 = fi1 / 10000000000;
fi2_b1 = fi2 / 10000000000;
fi1_b2 = fi1 % 10000000000;
fi2_b2 = fi2 % 10000000000;
for (i = 93; i < 99; i++)
{
b1 = fi1_b1 + fi2_b1;
b2 = fi1_b2 + fi2_b2;
if (fi1_b2 + fi2_b2 > 9999999999)
{
b1 += 1;
b2 %= 10000000000;
}
printf("%lu%lu", b1, b2);
if (i != 98)
printf(", ");
fi1_b1 = fi2_b1;
fi1_b2 = fi2_b2;
fi2_b1 = b1;
fi2_b2 = b2;
}
printf("\n");
return (0);
}
