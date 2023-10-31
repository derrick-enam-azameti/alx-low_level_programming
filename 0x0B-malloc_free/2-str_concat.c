#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to the concatenated string (Success), or
 * NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *pstr = NULL;
	unsigned int len;
	unsigned int x;
	unsigned int y;
	unsigned int z;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	len = x + y + 1;
	pstr = malloc(len * sizeof(char));

	if (pstr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
	{
		pstr[z] = s1[z];
	}
	for (k = 0; k < y; z++, k++)
	{
		pstr[z] = s2[k];
	}
	pstr[len] = s2[k];
	return (pstr);
}
