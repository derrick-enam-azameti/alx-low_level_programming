#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: total number of arguments given to the function
 *
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);
}
