#include<stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	char letas, alphas;

	for (letas = '0' ; letas <= '9' ; letas++)
	{
		putchar(letas);
	}

	for (alphas = 'a' ; alphas <= 'f' ; alphas++)
	{
		putchar(alphas);
	}
		putchar('\n');
	return (0);
}
