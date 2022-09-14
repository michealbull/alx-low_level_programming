#include"main.h"

/**
 * _isalpha - the function checks if c is uppercase
 *
 * @c: uppercase
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 ||
	    c >= 65 && c <= 90)
		return (1);

	return (0);
}
