#include "main.h"

/**
 * print_alphabet -  this fuction prints the
* alphabet in lowercase, followed by a new line.
*/
void print_alphabet_x10(void)
{
	char letter;
	while (letter<=10)
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

	_putchar('\n');
}
