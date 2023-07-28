#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a two dimensional array
 * of integers
 * @width: the width to input
 * @height: the height to input
 *
 * Return: pointer to two dim. array
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
	return (NULL);
	for (w = 0; w < height; w++)
	{
		output[w] = malloc(sizeof(int) * width);
		if (output[w] == NULL)
		{
			for (; w >= 0; w--)
				free(output[w]);
			free(output);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			output[w][h] = 0;
	}
	return (output);
}
