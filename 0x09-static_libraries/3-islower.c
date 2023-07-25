#include "main.h"

/**
 * _islower - program that checks if a character is lowercase
 * @c: the character to check
 * Return: 1 if character is lowercase, return 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
