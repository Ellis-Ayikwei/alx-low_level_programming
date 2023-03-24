#include "main.h"
#include <stdio.h>

/**
 * print_numbers - this prints numbers for o to 9
 * Return: 1 if character is lowercase, 0 otherwise.
 */

void print_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
