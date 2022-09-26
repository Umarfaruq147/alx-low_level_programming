#include "main.h"

/**
 * _memcpy - copy number bytes form address "from" to address "to"
 * @dest: content is to be copied
 * @src: Source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n) /* Declaring WHILE */
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}