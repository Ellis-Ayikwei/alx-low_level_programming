#include "main.h"
/**
*void puts_half - checks a character and reverses it
*@s: is the value tobe checked and reversed
*return: Always 0.
*/
void puts_half(char *str)
{
	int i, b, j, n;

	b = 0;
	for (i = 0  ; str[i] != '\0' ; i++)
	{
		b += 1;
	}
	n = ((b -1)/2);
	if (b % 2 ==1)
	{
		for (j = n  ; j  <= b ; j++)
		{
			if  (str[j] != '\0')
			{
				_putchar(str[j]);
			}
		}
	}else 
	{
		for (j = b / 2 ; j <= b ; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
