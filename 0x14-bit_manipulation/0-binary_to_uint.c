#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number, or 0 if there is one or more chars in
 * the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		total = (total << 1) + (*b - '0');
	}

	return (total);
}
