#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int bit;
	char c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bit = (sizeof(unsigned long int) * 8) - 1; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
			break;
	}

	for (; bit >= 0; bit--)
	{
		c = ((n >> bit) & 1) ? '1' : '0';
		_putchar(c);
	}
}
