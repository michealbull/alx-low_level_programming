#include"main.h"

/**
 * print_rev - Entry point
 *
 * @s: takes input
 *
 * Return: Always 0
 */

void _print_rev(char *s)
{
	int sin;

	for (sin = 0; sin != '\0'; sin++)
		for (sin = sin - 1; sin >= 0; sin--)
			_putchar(s[sin]);
	_putchar('\n');

	return (0);
}
