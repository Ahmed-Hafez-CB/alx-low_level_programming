#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: our input
 *
 * Return: 1 if c is a digit else 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
