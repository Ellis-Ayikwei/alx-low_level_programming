#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the minumum number of coins to
*make change for an amount of money
*including the filename.
*@argc: the commands that are passed in the terminal
*@argv: the array of commands that are
*passed in the terminaal
*Return: always
*/
int main(int argc, char *argv[])

{
	int cents, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coin++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coin);

	return (0);
}
