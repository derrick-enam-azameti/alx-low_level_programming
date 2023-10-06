#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase, followed
 * by a new line. Print all the letters except 'q' and 'e'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');

	return (0);
}
