#include "main.h"
#include <stdio.h>

/**
 * void more_numbers(void) - this prints all numbers from 0 to 14c
 * ten times.
 * Return: 1 if character is lowercase, 0 otherwise.
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			
		}
	_putchar('\n');
	}
}
