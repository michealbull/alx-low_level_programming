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

	n = 4;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("n is positive\n");
	}
	if (n == 0)
	{
		printf("0 is zero\n");
	}
	if (n < 0)
	{
		printf("-n is negative\n");
	}
	return (0);

}
