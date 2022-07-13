#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: a pointer to the result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		src_len++;
		src++;
	}

	src_len++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
