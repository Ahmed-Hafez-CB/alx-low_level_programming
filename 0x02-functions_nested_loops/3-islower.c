#include "main.h"

/**
 * _islower - checks if alphabet is lowercase
 * @c: input char
 *
 * Return: 1 if lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
