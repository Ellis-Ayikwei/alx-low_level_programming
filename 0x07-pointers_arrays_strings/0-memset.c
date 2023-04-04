#include "main.h"

/**
* _memset - function  fills the
*first @n: bytes of the memory area
*pointed to by s with the constant byte c.
*@s: the pointer whos first memory will be filled
*@n: the byte to be filled to the first pointer
*@b: the constant to fill the first address
*Return: always the (s);
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
