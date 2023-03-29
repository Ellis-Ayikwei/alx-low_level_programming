#include "main.h"
#include <stdio.h>
/**
*print_array - checks a character and reverses it
*@a: is the pointer of the array a
*@n: is the size of the array
*return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	char *j;
	j = dest;
	
	while(*src != '\0'){
		*j++ = *src++;
	}
	*j = '\0';
	return dest;
}
