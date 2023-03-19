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

	for (letas = 'a' ; letas <= 'z' ; letas++)
	{
		putchar(letas);
	}

	for (alphas = 'A' ; alphas <= 'Z' ; alphas++)
	{
		putchar(alphas);
	}
		putchar('\n');
	return (0);
}
