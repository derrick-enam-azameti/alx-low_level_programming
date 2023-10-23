#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
