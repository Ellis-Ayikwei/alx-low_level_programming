#include "main.h"
#include <stdio.h>

/**
 * print_line - this prints a str8 line
 * in the terminal
 * @n: is the length of the line .
 * Return: 1 if character is lowercase, 0 otherwise.
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
