#include "main.h"
#include <stdlib.h>


/**
*argstostr - all the arguments of the program
*@ac: the i of the arguments
*@av: the array of the arguments
*Return: a pointer to  anew string
*or null otherwise.
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, j, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; av[arg][j]; j++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; av[arg][j]; j++)
			str[i++] = av[arg][j];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}

