#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: int
 * Return: 0
 */
void print_triangle(int size)
{
	int i = 0;
	int j;
	int n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			if (j < n)
				_putchar(' ');
			else
				_putchar('#');
		}
		n--;
		_putchar('\n');
	}
}
else
_putchar('\n');
}
	}
