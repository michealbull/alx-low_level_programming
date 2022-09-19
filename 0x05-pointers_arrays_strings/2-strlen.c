#include"main.h"
#include<stdio.h>

/**
 * _strlen - entry point
 *
 * @s: takes input
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
