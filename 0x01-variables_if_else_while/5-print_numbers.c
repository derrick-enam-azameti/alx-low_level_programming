#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main
 * Description: print numbers
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
