#include "main.h"
/**
 * _strspn - search the number of bytes
 * @s: segment targeted
 * @accept: reference bytes container
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1] == '\0'))
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

