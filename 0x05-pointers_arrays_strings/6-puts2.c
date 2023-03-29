#include "main.h"
#include <stdio.h>
/**
*puts2 - checks a character and prints every other character
*@s: is the value tobe checked and reversed
*return: Always 0.
*/
void puts2(char *s)
{
	int i, b, j;

	b = 0;

	for (i = 0  ; s[i] != '\0' ; i++)
	{ 
		b += 1;
		 for (j = 0 ; j <= b ; j +=2)
		{ 
			printf("%c", s[i]);
		}
	}
	printf("\n");
}
