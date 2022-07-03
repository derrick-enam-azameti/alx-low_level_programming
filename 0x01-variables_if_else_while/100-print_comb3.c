#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 < 9; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 < 10; dg2++)
		{
			putchar((dg1 % 10) + '0');
			putchar((dg2 % 10) + '0');

			if (dg1 == 8 && dg2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
