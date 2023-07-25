#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: (0) upon success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
