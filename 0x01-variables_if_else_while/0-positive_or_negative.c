#include <stdio.h>

#include <time.h>
/**
 * main - assign random variable to n
 *
 * main - assign random number to n
 * and declares if it is positive or negative
 * Return: Always 0
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
