#include<stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: (0) upon success
 */

int main(int argc, char **argv)
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}
	return (0);
}
