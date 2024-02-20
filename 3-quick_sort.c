# include "sort.h"

/**
 * swap_int - function that performs swap operations
 * for our algorithm
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lom_part - function that performs the Lomuto partitioning
 * of the Quick Sort
 * @array: the array data structure
 * @min_idx: the lower bound of the array segments
 * @max_idx: the upper bound of the array segments
 * Return: the size of the array segments
 */

int lom_part(int *array, int min_idx, int max_idx, size_t size)
{
	int j, pivot = array[max_idx], i = (min_idx - 1);

	for (j = min_idx; j <= max_idx - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_int(&array[i], &array[j]);
		}
	}
	swap_int(&array[i + 1], &array[max_idx]);
	print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort - function that sorts out a data structure
 * based on the Quick Sort algorithm with Lomuto partitioning
 * @array: the data structure to be sorted
 * @size: the size of our array
 */

void quick_sort(int *array, size_t size)
{
	int pi, min_idx = 0, max_idx = size - 1;
	
	if (size < 2)
		return;
	pi = lom_part(array, min_idx, max_idx, size);
	quick_sort(array, pi - min_idx);
	quick_sort(array + pi + 1, size - pi - 1);
}

