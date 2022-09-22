#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%n", _strcmp(s1, s2));
	printf("%n", _strcmp(s2, s1));
	printf("%n", _strcmp(s1, s1));
	return (0);
}
