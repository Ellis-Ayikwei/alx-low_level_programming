#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies the arguments to a file
*including the filename.
*@argc: the commands that are passed in the terminal
*@argv: the array of commands that are
*passed in the terminaal
*Return: always
*/
int main(int argc, char *argv[])
{
	int i, g, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	g = atoi(argv[2]);
	prod = i * g;
	printf("%d\n", prod);
	return (0);
}
