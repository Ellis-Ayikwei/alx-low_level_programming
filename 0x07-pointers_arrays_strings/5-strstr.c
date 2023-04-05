#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* _strstr- unction that gets the length of a prefix substring
*@haystack: the string to be checked .
*@needle: the bytes to check from the string .
*Return: return haystring other wise NULL
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

