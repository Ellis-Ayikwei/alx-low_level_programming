#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	int leet[5] = {'A', 'E', 'O', 'T', 'L'};
	int feet [5] = {4, 3, 0, 7, 1};

	while (str[i])
	{
		for (j = 0; j <= 4; j++)
		{
			if (str[i] == leet[j] ||
			    str[i] - 32 == leet[j])
			{
				str[i] = feet[j] + '0';
			}
		}
		i++;
	}
	return (str);
}
