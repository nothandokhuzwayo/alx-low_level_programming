#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *freed;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		freed = head->next;
		free(head->str);
		free(head);
		head = freed;
	}
	free(head->str);
	free(head);
}
