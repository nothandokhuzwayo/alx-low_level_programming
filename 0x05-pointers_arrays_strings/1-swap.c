#include "main.h"

/**
* swap_int - function that swaps the values of two integers
* @a: int a
* @b: int b
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
