#include<stdio.h>
/* more headers goes there */


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
	{
	int letas, logan;

	letas = 0;
	logan = 0;


	for (letas = 0 ; letas <= 8 ; letas++)
	{
		for(logan = letas + 1 ; logan <= 9 ; logan++ )
		{
			if (letas != logan)
			{
				putchar('0' + letas);
				putchar('0' + logan);
			}
			if(letas <=7 && logan <=9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
		putchar('\n');
		

	return (0);
}
