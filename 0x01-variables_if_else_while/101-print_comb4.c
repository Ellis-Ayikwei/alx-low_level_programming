#include<stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	int letas, logan, moda;

	letas = 0;
	logan = 0;
	moda = 0;


	for (letas = 0 ; letas <= 7 ; letas++)
	{
		for (logan = letas + 1 ; logan <= 8 ; logan++)
		{
			for (moda = logan + 1 ; moda <=9 ; moda++)
			{
		
			
				if (letas != logan)
				{
					putchar('0' + letas);
					putchar('0' + logan);
					putchar('0' + moda);
				}	
				if (letas <= 6 && logan <= 8 && moda <=9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
	return (0);
}
