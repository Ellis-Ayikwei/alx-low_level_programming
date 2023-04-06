#include "main.h"
/**
*makeprimefirst - checks if a number is prime
*@u: the number to check
*@i: the numbers we'll go through
*Return: Whether or not the number is a prime number
*/

int makeprimefirst(int u, int i)
{
	if (u <= 1 || u % i == 0)
		return (0);
	else if (u == i)
		return (1);
	else if (u > i)
		makeprimefirst(u, i + 1);

	return (1);
}

/**
*is_prime_number - shows if an
*integer is a prime number or not
*@n: the number to check
*Return: 0 if the number is not prime, and 1 otherwise
*/

int is_prime_number(int n)
{
	return (makeprimefirst(n, 2));
}
