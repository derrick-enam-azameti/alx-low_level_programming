#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, x1, x2, y1, y2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	x1 = j / 1000000000;
	x2 = j % 1000000000;
	y1 = k / 1000000000;
	y2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", y1 + (y2 / 1000000000));
		printf("%lu", y2 % 1000000000);
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}

	printf("\n");

	return (0);
}
