#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the length of a string
 * @n: number
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
