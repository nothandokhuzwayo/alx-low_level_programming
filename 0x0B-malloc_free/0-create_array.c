#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of an array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to the array, NULL if it fail
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str

		str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
