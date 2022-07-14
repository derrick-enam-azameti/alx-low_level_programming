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
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (0);
}
