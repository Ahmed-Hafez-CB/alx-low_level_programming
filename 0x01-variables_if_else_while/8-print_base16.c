#include <stdio.h>

/**
 * main - print base 16 characters
 *
 * Return: 0
 */
int main(void)
{
	int x;
	char alphabet;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
