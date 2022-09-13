#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{	int ch = '49';

	while (ch <= '57')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
