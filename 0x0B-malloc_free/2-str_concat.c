#include "main.h"
#include <stdlib.h>


/**
*str_concat - concatenates two strings.
*@s1: a string to be concatted.
*@s2: a string to be concated
*Return: NUll if the str is null .
*/


char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, h, j = 0;

	if (s1 == NULL)
		s1="";
	if(s2 == NULL)
	{
		s2="";
	}
	for (i = 0 ; s1[i];  i++)
	{
		j++;
	}
	h = j;
	for (i = 0  ; s2[i]; i++)
	{
		h++;
	}
	a = malloc(sizeof(char) * (h + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0  ; s1[i]; i++)
	{
		a[i] = s1[i];

	}
	for (i = 0 ; s2[i] ; i++)
		a[j + i] = s2[i];
	a[h + 1] = '\0';
	return (a);
}
