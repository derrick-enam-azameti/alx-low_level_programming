#include "main.h"
#include <stdio.h>
/**
 * main - prints all args received
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
