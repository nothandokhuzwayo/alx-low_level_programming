#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: head of the list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int t;

	if (h == NULL)
		return (0);

	t = 1;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	while (h->next != NULL)
	{
		t++;

		h = h->next;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}

	return (t);
}
