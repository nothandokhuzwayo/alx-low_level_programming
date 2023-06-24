#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: char to check
 * Return: 1 for number (0 to 9) else return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
