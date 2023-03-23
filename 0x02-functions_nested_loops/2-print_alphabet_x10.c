#include "main.h"
/**
 * print_alphabet_x10 -  this function prints the
* alphabet in lowercase 10 times , followed by a new line.
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i <= 10)
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	i++;
	_putchar('\n');
}
