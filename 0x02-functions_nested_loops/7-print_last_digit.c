#include"main.h"
/**
 * print_last_digit - print last digit of a number
 * @lastdigit: defined
 * Return: n
 */
int print_last_digit(int lastdigit)
{
  
		lastdigit = lastdigit % 10;

	_putchar(lastdigit);
	return (lastdigit);
}
