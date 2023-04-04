#include "main.h"

/**
* _memcpy - copies n bytes from memory area
*src to memory area dest
*@src: the pointer whos memory will be copied
*@n: the byte to be filled to the first pointer
*@dest: the destination to be copied to
*Return: always the (dest);
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
