#include "search_algos.h"

/**
 * print_array - print an array
 * @array: the array to be printed
 * @start: the index of the first element
 * @end: the index of the last element
 */

void print_array(int *array, size_t start, size_t end)
{

	size_t i;
	char *sep = "";

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{

		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{

	size_t end, start, mid;

	if (!array)
		return (-1);

	end = 0;
	start = size - 1;

	while (end <= start)
	{

		print_array(array, end, start);
		mid = (end + start) / 2;

		if (array[mid] < value)
			endd = mid + 1;
		else if (array[mid] > value)
			start = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
