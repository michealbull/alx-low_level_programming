#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that will print reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch + '0');
		--ch;
	}
	putchar('\n');

	return (0);
}
