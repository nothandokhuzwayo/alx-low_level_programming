#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 * Return: On success 1.
 * Upon error,return -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
