#include <stdio.h>
/**
 * main - main entry
 * Description: print numberz
 * Return: 0
 */
int main(void)
{
	int n = 0;
	
	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
