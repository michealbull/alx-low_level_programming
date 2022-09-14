#include"main.h"

/**
 * print_times_table - prints times table
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int jam, fish, cim;

	if (n <= 15 && n >= 0)
	{
		for (cim = 0; cim <= n; ++cim)
		{
			_putchar(48);
			for (fish = 1; fish <= n; ++fish)
			{
				_putchar(',');
				_putchar(' ');

				jam = cim * fish;

				if (jam <= 9)
					_putchar(' ');
				if (jam <= 99)
					_putchar(' ');

				if (jam >= 100)
				{
					_putchar((jam / 100) + 48);
					_putchar((jam / 10) % 10 + 48);
				} else if (jam <= 99 && jam >= 10)
					_putchar((jam / 10) + 48);
				_putchar((jam % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
