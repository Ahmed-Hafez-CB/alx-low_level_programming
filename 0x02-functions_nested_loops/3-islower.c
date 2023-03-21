#include "main.h"

/**
 * checks if alphabet is lowercase
 *
 * Retunr: 1 if lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
