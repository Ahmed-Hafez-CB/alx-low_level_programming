#include "main.h"

/**
 * _strcpy - copy from src dest
 * @dest: our dest
 * @src: our string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
