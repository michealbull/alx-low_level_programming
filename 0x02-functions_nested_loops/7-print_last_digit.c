#include"main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: defined
 * Return: n
 */
int print_last_digit(int)
{
	int lastdigit;
  
		lastdigit = lastdigit % 10;

	_putchar(lastdigit);
	return (lastdigit);
}
