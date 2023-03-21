#include "main.h"

/**
 * print_alphabet_x10 - print alphabets x 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	i = 0;
	while (i++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
