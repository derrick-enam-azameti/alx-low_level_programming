#include "main.h"
/**
 * _abs - prints the absoulute value of a number
 * @i: number
 * Return: 0
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
