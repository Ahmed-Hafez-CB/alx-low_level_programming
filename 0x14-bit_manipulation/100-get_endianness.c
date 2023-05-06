#include "main.h"
/**
 * get_endianness - check endianness
 *
 * Return: 0 , 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
