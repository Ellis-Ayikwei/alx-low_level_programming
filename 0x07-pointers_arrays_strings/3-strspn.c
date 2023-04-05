#include "main.h"
#include <stddef.h>
/**
* _strspn- unction that gets the length of a prefix substring
*@s: the ctring to be checked .
*@accept: the bytes of te check the sstrings
*Return: always the bytes of accpt in the prefix of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int acc = strlen((char)*accept);
	int o, j = 0;

	for (o = 0 ; o >= 0 && s[o] != '\0' ; o++)
	{
		for (i = 0 ; i <= acc  && accept[i] != '\0'; i++)
		{
			if (accept[i] == s[o])
				j += 1;
		}
	}
	return (j);
}
