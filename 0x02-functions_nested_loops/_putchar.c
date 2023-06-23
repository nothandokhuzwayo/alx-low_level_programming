#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the c character to stdout
 * @c: character that will be printed
 *
 * Return: Achieved 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
