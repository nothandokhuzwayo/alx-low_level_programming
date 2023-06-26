#include "main.h"

/**
 * print_line - function that draws a straight line using only putchar
 * @n: the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
