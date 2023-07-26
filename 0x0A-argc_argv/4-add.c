#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that adds positive numbers
* @argc: the number of command line argument
* @argv: the array that contains the program command line argument
* Return: (0)
*/

int main(int argc, char **argv)
{
	int t, s, add = 0;

	for (t = 1; t < argc; t++)
	{
		for (s = 0; argv[t][s] != '\0'; s++)
		{
			if (!isdigit(argv[t][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[t]);
	}
	printf("%d\n", add);
	return (0);
}
