#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t lis
 * @h: Pointer to the head of the list.
 *
 * Return: number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	int t = 0;

	if (h == NULL)
		return (t);

	while (h != NULL)
	{
		t++;
		h = h->next;
	}

	return (t);
}
