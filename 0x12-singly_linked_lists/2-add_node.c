#include <stdlib.h>
#include <string.h>
#include <stdio>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added as the new node's value.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
