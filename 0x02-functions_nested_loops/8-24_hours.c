#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: starts from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h;

	for (h = 0; h < 24; h++)
	{
		int m = 0;

		while (m < 60)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m++;
		}
	}
}
