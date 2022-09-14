#include "main.h"
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for argument of the function
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
