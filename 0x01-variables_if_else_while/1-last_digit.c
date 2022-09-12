#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entey point
 *
 *Description: A program that prints the last digit
 *
 * Result: Always 0 (Success)
 */
int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	lastdigit = n % 10;

	if(lastdigit > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n");
	}
	if else(lastdigit == 0)                                                               {
		printf("last digit of %i is %i and is 0\n");
	}
	if else(lastdigit < 6 && !0)
	{
		printf("last digit of %i is %i and is less than 6 and not 0\n");
	}

		return (0);

}
