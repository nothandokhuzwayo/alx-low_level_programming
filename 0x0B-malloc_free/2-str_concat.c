#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int t, s;
	char *conct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	t = s = 0;

	while (s1[t] != '\0')
	{
		t++;
	}
	while (s2[s] != '\0')
	{
		s++;
	}

	conct = malloc(sizeof(char) * (t + s + 1));
	if (conct == NULL)
	{
		return (NULL);
	}
	t = s = 0;
	while (s1[t] != '\0')
	{
		conct[t] = s1[t];
		t++;
	}
	while (s2[s] != '\0')
	{
		conct[t] = s2[s];
		t++, s++;
	}
	conct[t] = '\0';
	return (conct);
}
