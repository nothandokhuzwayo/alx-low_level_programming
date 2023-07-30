#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, otherwise return 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len, len0, len1, i, carry, num1, num2, *product, a = 0;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len = _strlen(s1);
	len0 = _strlen(s2);
	len1 = len + len0 + 1;
	product = malloc(sizeof(int) * len1);
	if (!product)
		return (1);
	for (i = 0; i <= len + len0; i++)
		product[i] = 0;
	for (len = len - 1; len >= 0; len--)
	{
		num1 = s1[len] - '0';
		carry = 0;
		for (len0 = _strlen(s2) - 1; len0 >= 0; len0--)
		{
			num2 = s2[len0] - '0';
			carry += product[len + len0 + 1] + (num1 * num2);
			product[len + len0 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			product[len + len0 + 1] += carry;
	}
	for (i = 0; i < len1 - 1; i++)
	{
		if (product[i])
			a = 1;
		if (a)
			_putchar(product[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(product);
		return (0);
}
