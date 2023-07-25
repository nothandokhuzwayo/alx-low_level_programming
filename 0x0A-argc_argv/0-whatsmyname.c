#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: (0) upon success
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
		return (0);
}
