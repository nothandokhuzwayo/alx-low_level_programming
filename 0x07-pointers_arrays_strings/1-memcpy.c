#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: where pointer is returned to
 * @src: where memory is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int i = n;

	for (; t < i; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
