#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes the character c to stdout
 * @c: character to print
 * Return: 1 (Achieved)
 * return -1 upon error
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}

