#include "main.h"
/**
 * string_toupper - capitalize a string
 * @str: input string
 * Return: capitalized string
 */

char *string_toupper(char *str)
{
	char *start = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (start);
}
