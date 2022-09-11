#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry piont
 *
 * Description: A program that shows an example of if statement
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n == 0)
	{
		printf("%i 0 is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);

}
