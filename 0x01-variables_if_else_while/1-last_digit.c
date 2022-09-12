#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entey point
 *
 *Description: A program that prints the last digit,
 *rather than the first
 * Result: Always 0 (Success)
 */
int main(void)

{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("last digit of %i is %i and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && !0)
	{
	printf("last digit of %i is %i and is less than 6 and not 0\n", n, lastdigit);
	}

	return (0);
}
