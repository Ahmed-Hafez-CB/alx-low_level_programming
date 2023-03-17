#include <stdio.h>

/**
 * main - prints all alphabets twice
 *	in upper and lowercase
 *
 * Return: 0 Always
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
