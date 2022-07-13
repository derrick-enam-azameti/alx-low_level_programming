#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
