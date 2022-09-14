#include"main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 */

void print_alphabet_x10(void)
{
	int d;

	for (d = 0; d <= 9; ++d)
	{
		int ch;
	
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
