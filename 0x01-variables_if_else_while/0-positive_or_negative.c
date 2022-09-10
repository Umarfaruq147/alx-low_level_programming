#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign random number to n
 * and declares if its positive or negative
 */
int main(void)
{
	sreand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
