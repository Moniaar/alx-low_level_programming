#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * 10 in an array of integers using the Linear search algorithm
 *
 * @array: the array the searching algorithm will work on
 *
 * size: the size of the given array
 *
 * value: the value we are searching for inside the array
 *
/

int linear_search(int *array, size_t size, int value)
{
	int POST;
	POST = 0;

	for (POST = 0; POST < size; POST++)
	{
		print ("Value checked array[%d] = [%d]", array[POST], value);
		if (array[POST] == value)
			return (POST);
			print("Found %d at index: %d", value, POST);
		else
			return (-1);
	}
}
