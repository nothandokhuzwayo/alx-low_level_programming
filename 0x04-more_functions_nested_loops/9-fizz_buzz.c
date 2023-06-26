#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints the numbers 1 - 100, for multiples of 3
 * print Fizz, for the multiples of 5 print Buzz, for multiples of both
 * print FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
			if (i % 3 == 0)
				printf("Fizz");
			else if (i % 5 == 0)
				printf("Buzz");
			else if (i % 15 == 0)
				printf("FizzBuzz");
			else
				printf("%i", i);
			if (i < 100)
				printf(" ");
		}
		printf("\n");
		return (0);
}
