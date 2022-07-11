#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an integer array
 * @a: input array
 * @n: input integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
