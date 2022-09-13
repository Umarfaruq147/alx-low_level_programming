#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @c: character has to be checked
 * Return: Returns 1 and prints + if n is greater than zero,
 * Returns 0 and prints 0 if n is in zero
 * Return -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
		return (-1);

}
