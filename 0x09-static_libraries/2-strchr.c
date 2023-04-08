#include "main.h"
#include <stddef.h>
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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
