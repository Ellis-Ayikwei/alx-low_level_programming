#include "main.h"
#include <stdio.h>
/**
* _strcpy - checks a character and reverses it
*@dest: the buffer to copy the srtings to
*@src: the source to copy the string from
* Return: Always dest.
*/
char *_strcat(char *dest, char *src)
{
	
 
	size_t dest_len = strlen(dest);
	size_t n = dest_len + strlen(src);
	size_t i;
	

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}

	return (dest);
}
