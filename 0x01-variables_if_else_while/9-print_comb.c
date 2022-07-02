#include <stdio.h>
#include <stdlib.h>

/**
 * main -main entry
 * Description: Print all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
