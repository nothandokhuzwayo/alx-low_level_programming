#include <stdio.h>
/**
 * main- A programthat prints that prints all single digit numbers of base 10
 * starting from 0 using only the putchar function
 * Return: 0 (Achieved)
 */

int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}
