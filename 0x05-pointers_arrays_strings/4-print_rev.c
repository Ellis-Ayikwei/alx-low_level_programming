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
		b += 1; /*this is the length of the string*/
	}
	for (j = b  ; j >= 0 ; j--)
	{
		if  (s[j] != 0)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
