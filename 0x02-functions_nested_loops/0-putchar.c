#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return:0 On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
