#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input to
 * @accept: input from
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				n++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
