#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 402;
	putchar("n=%d\n", n);
	reset_to_98(&n);
	putchar("n=%d\n", n);
	return (0);
}
