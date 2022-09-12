#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption: A program that prints both upper and lower case letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
		purchar(\n);
	}
	return (0);
}
