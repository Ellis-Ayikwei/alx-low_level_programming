#include "main.h"
#include <stdio.h>
/**
*print_rev - checks a character and reverses it
*@s: is the value tobe checked and reversed
*return: Always 0.
*/
void print_rev(char *s)
{
	int i, b, j;

	b = 0;
	for (i = 0  ; s[i] != '\0' ; i++)
	{
		b += 1;
	}
	for (j = b  ; j >= 0 ; j--)
	{
		if  (s[j] != b)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
