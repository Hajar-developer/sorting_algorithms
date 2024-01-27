#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list); 
{
	listint_t *tmp, *prev, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	tmp = *list;
	tmp = tmp->next;
	while (tmp)
	{
		while (node->prev && node->n < (node->prev)->n)
		{
			if (tmp->next)
				(tmp->next)->prev = tmp->prev;
			(tmp->prev)->next = tmp->next;
			tmp = tmp->prev;
			tmp->prev = tmp->prev;
			tmp->next = tmp;
			if (tmp->prev)
				(tmp->prev)->next = tmp;
			tmp->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
			tmp = tmp->prev;
		}
		tmp = tmp->next;
	}

}

