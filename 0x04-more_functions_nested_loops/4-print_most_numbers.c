#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - this prints all numbers except 2 and 4 .
 * Return: 1 if character is lowercase, 0 otherwise.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (i != 50 && i != 52)
		{
		_putchar(i);
		}
	}
	putchar('\n');
}
