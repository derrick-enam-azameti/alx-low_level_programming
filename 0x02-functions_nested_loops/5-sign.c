#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int num;

	if (n >0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
