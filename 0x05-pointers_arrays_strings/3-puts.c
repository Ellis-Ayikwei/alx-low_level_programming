#include "main.h"
/**
*_puts - outputs the charracter of the pointer
*@str: is the value tobe checked and out putted
*return: Always 0.
*/
 void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
