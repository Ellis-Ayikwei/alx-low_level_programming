#include "main.h"

/**
* print_triangle - this prints a triangle in
* in the terminal
* @size : the size of the triangle .
* Return: 1 if character is lowercase, 0 otherwise.
*/
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - 1 ; y >= x; y--)
			{
				_putchar(32);
			}
			for (y = 0 ; y < x ; y++)
			{
				_putchar(35);
			}
			if (x == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
