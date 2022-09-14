#include"main.h"

/**
 * _islower - ensures that c is lower case
 *
 * @c: checks input of function
 *
 * Return: return 1 if c islower,
 *         return 0 otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
