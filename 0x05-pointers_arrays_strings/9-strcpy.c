#include "main.h"

/**
 * _strcpy - copy the string pointed to by a src to dest
 * @dset: char to check
 * @src: char to check
 * Umarfaruq - Author
 * return: 0 is success
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
