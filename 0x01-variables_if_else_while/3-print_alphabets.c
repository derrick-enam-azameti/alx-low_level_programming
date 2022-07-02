#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 *
 * Description: a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
		putchar('\n');

	return (0);
}
