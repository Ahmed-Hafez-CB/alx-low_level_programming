#include "main.h"

/**
 * print_rev - reverse a string
 * @s: our string
 */
void print_rev(char *s)
{
	int i,j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
