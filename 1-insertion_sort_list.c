#include "sort.h"

void sorted_insert(listint_t **sorted, listint_t *new);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *	in ascending order using the Insertion sort algorithm
 *
 * @list: A pointer to the head of a doubly linked list
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;
	listint_t *sorted = NULL;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		tmp = current->next;
		current->prev = current->next = NULL;
		sorted_insert(&sorted, current);
		*list = sorted;
		print_list(*list);
		current = tmp;
	}
}

/**
 * sorted_insert - Insert node in accending ordor
 *
 * @sorted: pointer to an empty list to insert to
 * @new: new node to insert to linked list
 *
 * Return: Nothing
 */

void sorted_insert(listint_t **sorted, listint_t *new)
{
	listint_t *current;

	if (*sorted == NULL)
		*sorted = new;
	else if ((*sorted)->n >= new->n)
	{
		new->next = *sorted;
		new->next->prev = new;
		*sorted = new;
	}
	else
	{
		current = *sorted;

		while (current->next != NULL && current->next->n < new->n)
			current = current->next;

		new->next = current->next;
		if (current->next != NULL)
			new->next->prev = new;

		current->next = new;
		new->prev = current;
	}
}

