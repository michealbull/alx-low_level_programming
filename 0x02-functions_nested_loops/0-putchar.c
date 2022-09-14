#include"main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[8] = "_putchar";
	int ch = 0;
	
	while (ch <= 8)
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
	return (0);
}
