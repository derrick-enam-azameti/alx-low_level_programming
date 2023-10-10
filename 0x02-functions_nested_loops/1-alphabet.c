#include "main.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
