#include "main.h"

/**
 * swap_int(int *a, int *b); - a function that swap the values of two integers
 * @a: An integer input pointer
 * @b: An integer input pointer.
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
