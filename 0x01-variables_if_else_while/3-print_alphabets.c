#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase and then in uppercase
 * using the putchar function
 * Return: 0 (Achieved)
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
	}
	putchar('\n');
		return (0);
}
