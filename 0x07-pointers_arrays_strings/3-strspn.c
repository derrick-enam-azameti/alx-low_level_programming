#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string input
 * @accept: charact3er to locate
 * Return: pointer to c
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y;
	char *strt = accept;

	while (*s)
	{
		y = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				x++;
				y = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = strt;
		if (y == 0)
			break;
	}
	return (x);
}
