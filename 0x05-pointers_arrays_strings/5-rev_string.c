#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: type char, pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	int k;

	for (i = 0; s[i] != 0; i++)
	{
	}
	j = 0;
	i = i - 1;
	while (j < i)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		j++;
		i--;
	}
}
