#include "main.h"
/**
 * print_to_98 - print n to 98 counts seperated by comma, followed by a space and number should be printed in order
 *
 * @n: input
 */

void print_to_98(int n)
{
	int ka;

	if (n > 98)
		for (ka = n; ka > 98; --ka)
			printf("%d, ", ka);
	else
		for (ka = n; ka < 98; --ka)
			printf("%d, ", ka);
	printf("98\n");
}
