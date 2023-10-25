#include "main.h"
#include <stdio.h>

/**
 * func - runs _sqrt_recursion
 * @a: int
 * @b: int
 * Return: result
 */

int func(int a, int b)
{
	int sqrt;

	sqrt = b * b;
	if (sqrt == a)
		return (b);
	else if (sqrt < a)
		return (func(a, b + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: number to compute square root of
 * Return: result
 */
int _sqrt_recursion(int n)
{
	return (func(n, 1));
}
