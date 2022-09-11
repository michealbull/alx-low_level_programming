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
		printf("is positive");
	}
	if (n == 0)
	{
		printf("is zero");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	return (0);

}
