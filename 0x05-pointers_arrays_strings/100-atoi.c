#include <stdio.h>
/**
 * _atoi - converts integer to string
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (sign < 0)
			total = (-total);

		return (total);
	}
}
