#include "main.h"

/**
 * swap_int - swaps 2 interger
 * @a: first int
 * @b : second int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
