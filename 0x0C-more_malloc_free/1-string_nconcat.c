#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t, s, len;
	char *x;

	if (s1 == NULL)
		t = 0;
	else
	{
		for (t = 0; s1[t] != '\0'; t++)
			;
	}

	if (s2 == NULL)
		s = 0;
	else
	{
		for (s = 0; s2[s] != '\0'; s++)
			;
	}
	if (s > n)
		s = n;
	x = malloc(sizeof(char) * (t + s + 1));
	if (x == NULL)
		return (NULL);
	for (len = 0; len < t; len++)
		x[len] = s1[len];
	for (len = 0; len < s; len++)
		x[len + t] = s2[len];
	x[t + s] = '\0';
	return (x);
}
