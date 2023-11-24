#include "main.h"

/**
 * flip_bits - convert one number to another by flipping bits
 * @n: num
 * @m: num to change to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int counter = 0;

	while (diff)
	{
		counter += diff & 1;
		diff >>= 1;
	}

	return (counter);
}
