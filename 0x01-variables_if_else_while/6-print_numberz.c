#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers starting
 * from '0' to '9', followed by a newline character.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
