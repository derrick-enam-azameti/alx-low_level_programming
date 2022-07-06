#include "main.h"

/**
 * print_last_digit - returns last digit
 * @n: number
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar((last % 10) + '0');

	return (last % 10);
}
