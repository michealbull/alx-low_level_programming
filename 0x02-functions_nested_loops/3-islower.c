#include"main.h"

/**
 * islower - ensures that c is lower case
 *
 * Return: Always 0
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	
	return (0);
}
