#include <stdio.h>

/**
 * main - print from 0 to 9 without char ?!?!
 *
 * Return: 0
 */
int main(void)
{
	int x;
	
	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
