#include <stdio.h>
/**
 * main - Program that prints all possible combinations of single-digit numberS
 * using only the putchar function
 * Return: 0 (Achieved)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a +'0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
