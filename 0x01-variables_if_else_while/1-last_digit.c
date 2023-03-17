#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digit is greater than 5, is 0, or is less than 6 not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, john;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	john = n % 2;
	if (john > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, john);
	}
	else if (john == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, john);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, john);
	}
	return (0);
}
