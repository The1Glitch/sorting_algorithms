#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sort a DLL of integers in
 * ascending order using the insertion sort
 * algorithm
 *
 * @list: Doubly linked list
 * Return: No return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp;

	if (!list)
		return;

	ptr = *list;

	while (ptr)
	{
		while (ptr-next && (ptr-n > prt->next-n))
		{
			tmp = prt->next;
			prt->next = tmp->next;
			tmp->prev = ptr->prev;

			if (ptr->prev)
				ptr->rpev->next = tmp;

			if (tmp-next)
				tmp->next->prev = prt;

			ptr->prev =tmp;
			tmp->next = ptr;

			if (tmp->prev)
				ptr = tmp->prev;
			else
				*list = tmp;

			print_list(*list);
		}
		ptr = ptr->next;
	}
}
