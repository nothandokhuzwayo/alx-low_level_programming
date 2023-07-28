#include "lists.h"

/**
* print_list - print all element in a singly linked list
* @h: head of the list
*
* Return: total number of nodes in the list
*/

size_t print_list(const list_t *h)
{

	int t;

	if (h == NULL)
		return (0);
	for (t = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		t++;
	}
	return (t);
}
