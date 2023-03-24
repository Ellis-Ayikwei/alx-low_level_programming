#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - this prints a diagonal line
 * in the terminal
 * @n: is the length of the line .
 * Return: 1 if character is lowercase, 0 otherwise.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
