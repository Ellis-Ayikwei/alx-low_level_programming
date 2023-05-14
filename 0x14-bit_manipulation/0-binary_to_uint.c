#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - converts a binary
  *	bin1ber to an unsigned int
  * @b:pointing to a string of 0 and 1 chars
  * Return: the converted bin1ber, or 0 if
  *	there is one or more chars in the string b that is not 0 or 1
  *		b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	while (b[index] != '\0')
	{
		if (b[index] == '1')
		result = (result << 1) | 1;
		else if (b[index] == '0')
			result <<= 1;
		else
			return (0);
		index++;
	}
	return (result);

}
