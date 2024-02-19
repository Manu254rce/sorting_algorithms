# include "sort.h"

/**
 * print_bubble - function that prints out the array after each
 * swap
 * @array: the data structure being worke on
 * @size: the size of the array
 */

void print_bubble(int *array, size_t size)
{
	size_t k;

	for (k = 0; k < size; k++)
		printf("%d ", array[k]);

	printf("\n");
}

/**
 * bubble_sort - function that sorts out elements in a
 * data structure via a Bubble Sort algorithm
 * @array: the data structure we are to use
 * @size: the size of the data structure
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_bubble(array, size);
			}
		}
	}
}
