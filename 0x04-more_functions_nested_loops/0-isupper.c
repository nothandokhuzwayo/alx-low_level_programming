#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the char to be checked
 * Return: 1 if uppercase, otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
