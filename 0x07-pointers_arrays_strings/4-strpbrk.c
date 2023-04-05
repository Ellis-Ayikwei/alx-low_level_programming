#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* _strpbrk- unction that gets the length of a prefix substring
*@s: the ctring to be checked .
*@accept: the bytes of te check the sstrings
*Return: a pointer to s if a byt is found otherwise NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int o;

	for (o = 0 ; s[o] != '\0' ; o++)
	{
		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (s[o] == accept[i])
			{
				return (&s[o]);
			}
		}
	}
	return (NULL);
}
