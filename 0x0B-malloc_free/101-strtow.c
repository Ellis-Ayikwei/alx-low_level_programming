#include "main.h"
#include <stdlib.h>
#include <stdio.h>



char **strtow(char *str)
{

	int a, i, j ;
	j = 0;

	if (*str == NULL || **str == "")
		return (NULL);

	for (i = 0 ; str[i] ; i++)
		j++;

	a = (char**)malloc(sizeof(char *) * j);
	if (a == NULL)
		return (NULL);

	for (i = 0 ; str[i] ; i++)
	{

		if (a[i] == ' ')
		{
			printf("\n");
		}
		a[i] = str[0][i];
	}


return(a);
}

