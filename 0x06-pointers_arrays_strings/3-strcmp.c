#include "main.h"
#include <string.h>
/**
* _strncpy - copies a string.
*@dest: the buffer to copy the srtings to
*@src: the source to copy the string from
*@n: the size of the cated string.
* Return: Always dest.
*/
int _strcmp(char *s1, char *s2)
{

	while ( *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}
