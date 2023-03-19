#include<stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	int letas;

	for (letas = 1 ; letas <= 10 ; letas++)
	{
		putchar(letas + '0');
	}
		putchar('\n');
	return (0);
}
