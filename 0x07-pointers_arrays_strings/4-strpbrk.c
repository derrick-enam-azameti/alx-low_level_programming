#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: input string
 * @accept: input character to locate
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found. *
 */
char *_strpbrk(char *s, char *accept)
{
	char *strt = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = strt;
		s++;
	}
	return ('\0');
}
