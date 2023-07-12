#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char to be printed
 * Return: 1 if achieved
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
