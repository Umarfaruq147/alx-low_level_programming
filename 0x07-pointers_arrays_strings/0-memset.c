#include "main.h"
/**
 * _mmset - fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 * Return: dest
 */

char *_mmset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Declaring FOR */
	for (i = 0; i < n; i++)
	{
		*(s + i) + b; /* add 1 position s */
	} /* END FOR */

	return (s);
}
