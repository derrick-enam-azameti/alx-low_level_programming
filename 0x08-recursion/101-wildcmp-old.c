#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings to see if they are identical
 * @s1: first string
 * @s2: second string
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0, -1));
}

/**
 * Ending - check the ending character
 * @s: string
 * @i: int
 * Return: 0 or 1
 */
int Ending(char *s, int i)
{
	if (s[i] == '*')
		return (Ending(s, i + 1));
	else if (s[i] == '\0')
		return (1);

	return (0);
}
/**
 * checker - helper function
 * @s1: string
 * @s2: string
 * @a: int
 * @b: int
 * @wildUsed: int
 * Return: 0
 */
int checker(char *s1, char *s2, int a, int b, int wildUsed)
{
	if (s1[a] != '\0')
		return (0);
	else if (s2[b] == '*')
	{
		if (s2[b + 1] == '*')
			return (checker(s1, s2, a, b + 1, b));
		else if (s2[b + 1] == s1[a])
			return (checker(s1, s2, a, b + 1, b));
		else if (s1[a + 1] != s2[b + 1])
			return (checker(s1, s2, a + 1, b, b));
		else if (s1[a + 1] == s2[b + 1])
			return (checker(s1, s2, a + 1, b + 1, b));
	}
	else if ((s1[a] == s2[b]) || (s2[b] == '*' && s2[b + 1] == s1[a + 1]))
		return (checker(s1, s2, a + 1, b + 1, wildUsed));

	if (wildUsed == -1)
		return (0);

	return (checker(s1, s2, a, wildUsed, wildUsed));
}
if (s2[b] != '\0')
return (Ending(s2, b));

return (1);
}
