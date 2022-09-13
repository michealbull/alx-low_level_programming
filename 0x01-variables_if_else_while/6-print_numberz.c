#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{	int ch = 0;

	while (ch < 10)
	{
		putchar(ch + '0');
		++ch;
	}
	putchar('\n');

	return (0);
}
