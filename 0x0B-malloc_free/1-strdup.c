#include "main.h"
#include <stdlib.h>


/**
*_strdup - returns a pointer to a newly
*allocated space in memory , which contains
*a copy of the*string given parameter.
*@str: the copy of the string as a parameter
*Return: NUll if the str is null .
*/


char *_strdup(char *str)
{
	char *a;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] ;  i++)
	{
		j++;
	}
	a = malloc(sizeof(char) * j + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; str[i]; i++)
	{
		a[i] = str[i];
	}
	a[j] = '\0';
	return (a);
}


