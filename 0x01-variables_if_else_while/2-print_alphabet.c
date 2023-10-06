#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in
 * lowercase followed by a line break
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
