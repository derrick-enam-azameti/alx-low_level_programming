#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char x;
	char y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
