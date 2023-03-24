#include "main.h"
#include <stdio.h>

/**
 * print_square - this prints a diagonal line
 * in the terminal
 * @size: is the length of the line .
 * Return: 1 if character is lowercase, 0 otherwise.
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
