#include "main.h"

/**
 * valid - check for sqrt
 * @a: first number
 * @b: second number
 * Return: sqrt
 */
int valid(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (valid(a + 1, b));
}

/**
 * _sqrt_recursion - calc sqrt of number
 * @n : our number
 * Return: sqrt of number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (valid(1, n));
}
