#include "main.h"
#include <stdio.h>

/*
 * _strchr - Locates a character in a string
 * @s: string to perform search on
 * @c: character to find
 *
 * Return: s - a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
