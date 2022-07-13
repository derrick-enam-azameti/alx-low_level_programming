#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: number of bytes(int)
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_len = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		src_len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
