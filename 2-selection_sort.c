# include "sort.h"

/**
 * selection_sort - functin that sorts out a data structure
 * based on the Selection Sort algorithm
 * @array: the data structure to be sorted
 * @size: the size of the data structure
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
}
