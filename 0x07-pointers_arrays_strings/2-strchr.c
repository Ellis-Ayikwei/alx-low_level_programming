#include "main.h"
#include <string.h>
/**
* _strchr - returns a pointer to the first
*occurrence of the character c in the
*string s , or NULL if the character is not found.
*@c: the character to find.
*@s: the string to check
*Return: a pointer to the first found charact if
*not the NULL
*/

char *_strchr(char *s, char c)
{
	long i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
