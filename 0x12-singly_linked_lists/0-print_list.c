#include "lists.h"

/**
 * print_lits - prints all elements of list_t list
 * @h - pointer to the head of list_t list
 *
 * Return: number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}


