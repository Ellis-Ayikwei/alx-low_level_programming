#include <stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	unsigned int letas;

	while (letas <= 10)
	{
		putchar(48 + letas);
		letas += 1;
	}
		putchar('\n');
	return (0);
}
