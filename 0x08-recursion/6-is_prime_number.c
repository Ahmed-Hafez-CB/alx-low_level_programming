#include "main.h"

/**
 * valid - check for valid prime
 * @a:first number
 * @b:second number
 * Return: prime
 */
int valid(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (valid(a + 1, b));
}

/**
 * is_prime_number - check for prime
 * @n:our number
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (valid(2, n));
}
