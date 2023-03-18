#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		/* the number is less than 0:*/
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
		/* the number is greater than 0:*/
	{
		printf("%d is positive\n", n);
	}
	else
		/* the number is 0:*/
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
