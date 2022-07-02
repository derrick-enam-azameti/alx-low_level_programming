#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main entry
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	char l = 'z';

	while (l <= 'a')
	{
		putchar(l);
		l--;
	}

	putchar('\n');
	return (0);
}
