#include"main.h"

/**
 * _print_rev - Entry point
 *
 * @s: takes input
 */

void _print_rev(char *s)
{
	int sin;

	for (sin = 0; s[sin] != '\0'; sin++)
		for (sin = sin - 1; sin >= 0; sin--)
			_putchar(s[sin]);
	_putchar('\n');
}
