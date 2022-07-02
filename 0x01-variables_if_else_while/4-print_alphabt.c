#include <stdio.h>

/**
 * main - main entry
 * Description: print the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}

	putchar('\n');
	return (0);
}
