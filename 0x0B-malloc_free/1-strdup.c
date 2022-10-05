#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy array
 * @#src: array element
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
 * strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */

char*strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = -strlen(str) + 1;
	dst = (char *) malloc(size *sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dset);
}
