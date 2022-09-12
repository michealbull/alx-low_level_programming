#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: A program that will print letters 
 * apart from qn and e 
 *
 * Return: Always 0 
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
