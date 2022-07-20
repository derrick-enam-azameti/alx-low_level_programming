#include "main.h"
#include <stdio.h>
int check_prime(int num, int div);

/**
 * is_prime_number - checks if a number is prime
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (check_prime(n, div));
}

/**
 * check_prime - checks if num is divisible
 * @num: int
 * @div: result
 * Return: 0 or 1
 */
int check_prime(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (check_prime(num, div + 1));
}
