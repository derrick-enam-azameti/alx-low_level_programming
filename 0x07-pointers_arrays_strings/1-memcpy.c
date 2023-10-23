#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to memory area to copy from
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
