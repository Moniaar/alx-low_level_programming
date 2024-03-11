#include "search_algos.h"

/**
 * binary_serach - A function to do the binary search algorithm on
 * a sorted array
 *
 * @array: the array to be sorted
 *
 * size: the size of the given array
 * 
 * value: the value we are searching for inside the array
/

int binary_serach(int *array, size_t size, int value)
{
	int start, end;
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		if (value == array[mid])
			return mid;
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
