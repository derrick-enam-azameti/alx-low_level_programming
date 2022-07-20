#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find the square root
 * @n: integer to find square root of
 * @val: square root
 * Return: result
 */
int _sqrt(int n, int val)
{
	if (n > val)
		return (-1);
	else if (n * n == val)
		return (n);
	return (_sqrt(n + 1, val));
}
