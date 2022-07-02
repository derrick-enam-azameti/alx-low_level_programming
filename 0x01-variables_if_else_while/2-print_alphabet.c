#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: program that prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}
