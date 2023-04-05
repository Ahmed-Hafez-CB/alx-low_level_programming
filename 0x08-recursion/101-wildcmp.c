#include "main.h"

/**
 * valid - check if strs is identical
 * @s1: str1
 * @s2: str2
 * @i: first num
 * @j: second num
 * Return: 1 if identical else zero
 */
int valid(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (valid(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (valid(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (valid(s1, s2, i + 1, j) || valid(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - check if 2 strings are identical
 * @s1: str1
 * @s2: str2
 * Return: 1 if identical else zero
 */
int wildcmp(char *s1, char *s2)
	return (valid(s1, s2, 0, 0));
