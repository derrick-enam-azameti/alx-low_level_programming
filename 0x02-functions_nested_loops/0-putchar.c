#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[] = "_putchar\n";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	return (0);
}
