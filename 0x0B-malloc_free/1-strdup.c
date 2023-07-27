#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: char
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}
