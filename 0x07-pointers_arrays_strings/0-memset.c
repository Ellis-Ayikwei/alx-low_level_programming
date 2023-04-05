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
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i]= src[i];
	}
	return (dest);
}
