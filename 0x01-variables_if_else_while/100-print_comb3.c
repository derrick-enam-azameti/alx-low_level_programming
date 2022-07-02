#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			putchar('0' + d);
			putchar('0' + c);

			if (c + d != 18)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
