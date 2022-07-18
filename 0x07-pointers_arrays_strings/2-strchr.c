#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string input
 * @c: character to locate
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return ('\0');
}
