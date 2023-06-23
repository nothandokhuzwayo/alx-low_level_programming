#include <stdio.h>
/**
 * main - A program that prints all single digits of base 10 starting from 0
 * in the main function
 * Return: 0 (Achieved)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
