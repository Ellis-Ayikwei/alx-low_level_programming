#include "main.h"
#include <stdio.h>
/**
*puts2 - checks a character and prints every other character
*@s: is the value tobe checked and reversed
*return: Always 0.
*/
void puts2(char *s)
{
	int i;

	for (i = 0  ; s[i] != '\0' ; i += 2)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
