#include "main.h"
#include <stdio.h>

/**
 * prime_func - runs _sqrt_recursion
 * @a: int
 * @b: int
 * Return: result
 */

int prime_func(int a, int b)
{
	if ((b * b) == a || a < 0)
		return (0);
	else if ((b * b) > a)
		return (1);
	else
		return (prime_func(a, (b + 1)));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number
 * Return: 1 if n is integer otherwise is 0
 */
int is_prime_number(int n)
{
	return (prime_func(n, 0));
}

