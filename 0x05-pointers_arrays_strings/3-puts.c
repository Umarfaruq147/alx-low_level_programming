#include "main.h"

/**
 * _puts - A function that prints a string
 * followed by a new line to stdout
 * @str: An input string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
