#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing lowercase letters with putchar
 *
 * result: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
