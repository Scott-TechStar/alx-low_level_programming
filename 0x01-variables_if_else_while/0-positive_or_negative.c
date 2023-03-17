#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *Main- Entry Point.
 *Description: Check whether the random number is positive or negative.
 *Return: Always 0 (success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
	  {
	    printf(n + "is a positive number\n");
	  }else
	  {
	    printf(n + "is a negative number\n");
	  }
	return (0);
}
