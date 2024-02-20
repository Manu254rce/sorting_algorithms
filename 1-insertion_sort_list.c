# include "sort.h"

/**
 * insertion_sort_list - function that sorts a list
 * data structure using the sort algorithm
 * @list: the data structure to be sorted
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *swap_node;

	if (list == NULL || *list == NULL)
		return;

	current_node = (*list)->next;

	while (current_node != NULL)
	{
		swap_node = current_node;
		current_node = current_node->next;

		while (swap_node->prev != NULL && swap_node->n < swap_node->prev->n)
		{
			swap_node->prev->next = swap_node->next;

			if (swap_node->next != NULL)
				swap_node->next->prev = swap_node->prev;

			if (swap_node->prev->prev != NULL)
				swap_node->prev->prev->next = swap_node;
			else
				*list = swap_node;

			swap_node->next = swap_node->prev;
			swap_node->prev = swap_node->prev->prev;
			swap_node->next->prev = swap_node;

			print_list(*list);
		}
	}
}

