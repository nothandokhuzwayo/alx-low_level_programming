#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - function that prints all the elements of a list_t list
* @h: head of the list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int t = 0;

	if (h == NULL)
		return (t);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	t++;
		return (t + print_list(h->next));
}
