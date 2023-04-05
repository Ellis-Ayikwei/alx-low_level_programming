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

unsigned int _strspn(char *s, char *accept)
{
	int i;
	/*int acc = sizeof((char)*accept);*/
	size_t acc = strlen(accept) + 1;
	int o, j = 0;

	for (o = 0 ; s[o] != '\0' ; o++)
	{
		if (s[o] != 32)
		{
			for (i = 0 ; accept[i] != '\0' ; i++)
			{
				if (s[o] == accept[i])
				{
					j ++;
				}
			}
		}
		else
		{
			return (j);
		}
	}
	return (j);
}
