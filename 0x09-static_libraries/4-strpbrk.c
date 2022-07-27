#include "main.h"
/**
 * _strpbrk - locates the first occurance ...
 * @s: string to search
 * @accept: where bytes are stored
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
