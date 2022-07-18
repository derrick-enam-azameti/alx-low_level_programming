#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search
 * @needle: string to search for
 * Return: a pointer to the start of the located substring,
 * or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *n_start = needle;
	char *h_start = haystack;

	while (*haystack)
	{
		h_start = haystack;
		needle = n_start;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = h_start + 1;
	}
	return (NULL);
}
