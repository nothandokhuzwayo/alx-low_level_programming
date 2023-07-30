#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *y;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	y = malloc(sizeof(int) * s);

	if (y == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		y[i] = min++;

	return (y);
}
