#include <stdio.h>

/**
 * main - entry piont
 *
 * Description: A c code to show sizeof
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d bytes(s)\n", sizeof(int));
	printf("size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("size of a long long: %d bytes(s)\n", sizeof(long long));
	printf("size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
