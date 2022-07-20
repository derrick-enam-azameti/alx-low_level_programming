#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
