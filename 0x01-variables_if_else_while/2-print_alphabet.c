#include <stdio.h>

/**
 * main - prints all alphabets
 *
 * Return: 0 Always
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
