#include "main.h"
/**
 * _strlen_recursion - return len of str
 * @s: our string
 * Return: len(str)
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * valid - check if string is palindrome
 * @s: our string
 * @i: first num
 * @j: second num
 * Return: 1 if palindrome else 0
 */
int valid(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (valid(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check for palindrome string
 * @s: our string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	return (valid(s, 0, _strlen_recursion(s) - 1));
}
