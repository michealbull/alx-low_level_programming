#include"main.h"

/**
 * times_table - print multiplication table
 *
*/

void times_table(void)
{
	int chim, fish, jam;

	for (chim = 0; chim <= 9; ++chim)
	{
		_putchar('0');
		for (fish = 1; fish <= 9; ++fish)
		{
			_putchar(',');
			_putchar(' ');

			jam = chim * fish;
        
			if (jal <= 9)
				_putchar(' ');
			else
				_putchar((jam / 10) + 48);

			_putchar((jam % 10) + 48); 
		}
		_putchar('\n');
	}
}
