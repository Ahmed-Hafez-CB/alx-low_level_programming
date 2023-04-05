#include "main.h"

/**
 * _strlen_recursion - print string length
 * @s: our input
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
