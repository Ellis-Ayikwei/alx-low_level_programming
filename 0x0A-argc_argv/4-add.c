#include <stdio.h>
#include <stdlib.h>
/**
*main - adds arguments to a file
*including the filename.
*@argc: the commands that are passed in the terminal
*@argv: the array of commands that are
*passed in the terminaal
*Return: always
*/
int main(int argc, char *argv[])
{
	int i, g, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (g = 0; argv[i][g] != '\0'; g++)
		{
			if (argv[i][g] < '0' || argv[i][g] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
