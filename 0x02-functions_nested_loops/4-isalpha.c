#include "main.h"

/**
 * checks if input is alphabet
 *
 * Return: 1 if alpha else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
