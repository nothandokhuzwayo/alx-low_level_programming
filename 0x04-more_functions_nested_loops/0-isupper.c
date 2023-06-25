#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the char to be checked
 * Return: 1 if uppercase otherwise return 0
 */

int _isupper(int c)
{
	if (c >= '65' && c <= '90')
	{
		return (1);
	}
		return (0);
}
