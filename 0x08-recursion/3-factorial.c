#include "main.h"

/**
 * factorial - calc the factorial
 * @n: our number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
