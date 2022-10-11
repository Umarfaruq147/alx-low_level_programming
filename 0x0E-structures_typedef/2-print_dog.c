#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct type dog
 * Return: No
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("NAME: %s\n", d->name);
		}
		else
		{
			printf("NAME: (nil)\n");
		}
		printf("AGE: %fg\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner (nil)\n");
		}
	}
}
