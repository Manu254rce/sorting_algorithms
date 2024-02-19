# include "sort.h"


/**
 * bubble_sort - function that sorts out elements in a
 * data structure via a Bubble Sort algorithm
 * @array: the data structure we are to use
 * @size: the size of the data structure
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swp = 1;
				print_array(array, size);
			}
		}
	}
}
