#include"main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * @str: takes inputs
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
