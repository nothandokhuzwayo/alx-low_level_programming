#include "lists.h"
#include <stdio>

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
