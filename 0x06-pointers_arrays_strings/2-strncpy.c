#include "main.h"
#include <string.h>
/**
* _strncat - concatenates two string together.
*@dest: the buffer to copy the srtings to
*@src: the source to copy the string from
*@n: the size of the cated string.
* Return: Always dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = strlen(src);
	int i;

	for (i = 0 ; i < n && i < src_len ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
