#include "main.h"
/**
 * print_array - prints n element of an array of integers
 * @: int to check
 * @n: int to check
 * Umarfaruq - Author
 * Return: 0 is success
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
