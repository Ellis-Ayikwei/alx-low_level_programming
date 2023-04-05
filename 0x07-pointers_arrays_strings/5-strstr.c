#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* _strspn- unction that gets the length of a prefix substring
*@s: the ctring to be checked .
*@accept: the bytes of te check the sstrings
*Return: always the bytes of accpt in the prefix of s
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

