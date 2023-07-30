#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: previosly allocated pointer to the memory by malloc
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory
 *
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *prv_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	prv_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = prv_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = prv_ptr[i];
	}
	free(ptr);
	return (p);
}
