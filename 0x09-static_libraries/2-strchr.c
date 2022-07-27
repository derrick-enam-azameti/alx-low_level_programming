#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns a pointer to the first occurance of a character
 * @s: target string
 * @c: target character
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
