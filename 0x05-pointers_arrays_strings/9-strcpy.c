#include "main.h"
#include <stdio.h>
/**
* _strcpy - checks a character and reverses it
*@dest: the buffer to copy the srtings to
*@src: the source to copy the string from
* Return: Always dest.
*/
char *_strcpy(char *dest, char *src)
{
	char *j;

	j = dest;
	while (*src != '\0')
	{
		*j++ = *src++;
	}
	*j = '\0';
	return (dest);
}
