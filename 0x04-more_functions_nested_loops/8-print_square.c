#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; j < (size); i++)
	{

		for (i = 0; i < (size); j++)
		{
			_putchar('#');
	}
	_putchar('\n');
}
}
