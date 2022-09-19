#include"main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: takes first input
 * @b: takes second input
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
