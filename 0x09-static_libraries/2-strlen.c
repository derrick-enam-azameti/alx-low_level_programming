#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
