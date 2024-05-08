#include "search_algos.h"
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if(array == NULL || size == 0 )
		return(-1);

	for (low = 0, high = size -1; high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		
		if(array[pos] > value)
			high = pos - 1;
		else if(array[pos] < value)
			low = pos + 1;
		else 
			return (pos);

	}
	return (-1);
}
