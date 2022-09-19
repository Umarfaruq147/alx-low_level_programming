#include "main.h"

/**
 * swap_int(int *a, int *b) - a function that swap the values of the two integers
 * @a: An integer input pointer
 * @b: An integer input pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int uma = *a;
	*a = *b;
	*b = uma;
}
