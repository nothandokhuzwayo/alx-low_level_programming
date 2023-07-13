#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints buffer
 * @b: buffer content
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int t, j, i;

	t = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (t < size)
	{
		j = size - t < 10 ? size - t : 10;
		printf("%08x: ", t);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + t + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + t + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		t += 10;
	}
}
