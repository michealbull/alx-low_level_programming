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

	for (ch = 0, ch < 9, ++ch)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
