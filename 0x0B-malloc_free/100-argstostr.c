#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: arrgument vector
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int t, s, w = 0, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
		for (s = 0; av[t][s]; s++)
			x++;
	}
	x += ac;
	str = malloc(sizeof(char) * (x + 1));
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
		for (s = 0; av[t][s]; s++)
		{
			str[w] = av[t][s];
			w++;
		}
		if (str[w] == '\0')
		{
			str[w++] = '\n';
		}
	}
	str[w] = '\0';
	return (str);
}
