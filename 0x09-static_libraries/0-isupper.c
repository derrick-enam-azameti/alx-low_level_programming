#include "main.h"
/**
 * _isupper - function that verifies if a char is uppercase or not
 * @c: char to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
