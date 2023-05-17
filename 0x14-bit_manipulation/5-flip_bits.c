#include "main.h"

/**
 * flip_bin -returns the number of bin you
 * :%would need to flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bin to flip to get from n to m.
 */
unsigned int flip_bin(unsigned long int n, unsigned long int m)
{
	unsigned long int excl = n ^ m, bin = 0;

	while (excl > 0)
	{
		bin += (excl & 1);
		excl >>= 1;
	}

	return (bin);
}
