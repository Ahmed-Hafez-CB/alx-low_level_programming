#include "main.h"

/**
 * puts_hald - print half of the string
 * @str: our string
 */
void puts_half(char *str)
{
	int string, n;

	string = 0;
	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; string++)
		_putchar(str[string]);
	_putchar('\n');
}
