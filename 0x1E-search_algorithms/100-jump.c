#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */

int jump_search(int *array, size_t size, int value) {

    if (!array || size == 0)
        return -1;

    size_t step = sqrt(size);
    size_t prev = 0;

    while (array[prev] < value && prev < size) {

        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        prev += step;
    }

    size_t start = prev - step;

    for (; start < size && array[start] < value; start++) {

        printf("Value checked array[%ld] = [%d]\n", start, array[start]);
    }

    if (start < size && array[start] == value) {

        printf("Value checked array[%ld] = [%d]\n", start, array[start]);
        return start;
    }

    return -1;
}
