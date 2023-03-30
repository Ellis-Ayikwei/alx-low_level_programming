#include "main.h"
#include <string.h>
/**
* _strcmp - compares a string.
*@s1: the buffer to copy the srtings to
*@s2: the source to copy the string from.
* Return:returns  an  integer  less  than,
*equal  to,  or greater than zero if s1
*is found, respectively, to be
*less than, to match, or
*be greater than s2..
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
