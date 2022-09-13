#include <stdio.h>

/**
 * main - entry point
 *
 * return: Always 0
 */

int main(void)
{	int ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
