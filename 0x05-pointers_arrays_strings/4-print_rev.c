#include "main.h"

/**
 * rev_string - A function that reverse a string.
 * @s: An input integer
 * Return: 0
 */
void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\n')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c  >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[d] = s[c];
		s[c] = d;
	}
}
