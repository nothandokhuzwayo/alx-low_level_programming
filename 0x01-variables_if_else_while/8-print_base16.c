#include <stdio.h>
/**
 * main - A  program that prints all the numbers of base 16 in lowercase using
 * the putchar function
 * Return: 0 (Achieved)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
