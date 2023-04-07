#include <stdio.h>

/**
*main - prints the arguments passed to a file
*@argc: the commands that are passed in the terminal
*@argv: the array of commands that are
*passed in the terminaal
*Return: always
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
