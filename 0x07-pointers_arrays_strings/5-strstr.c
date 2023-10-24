#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to  search in
 * @needle: substring to look for
 * Return: pointer to the substring if found or NULL if
 * not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *pt = needle;

		while (*pt == *haystack && *pt != '\0' && *haystack != '\0')
		{
			haystack++;
			pt++;
		}
		if (*pt == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
