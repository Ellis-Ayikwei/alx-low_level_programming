#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	i = n % 10;
	if (i > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i < 6 && i != 0)
	{
	printf("Last digit of %d is %d and less than 6 and not 0\n", n, i);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, i);
	}
	return (0);
}
