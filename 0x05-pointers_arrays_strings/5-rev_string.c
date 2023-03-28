#include "main.h"

/**
 * rev_string - reverse a string
 * @s: our string
 */
void rev_string(char *s)
{
	int i, j , k;
	char x;

	i = 0;

	while (s[i] != '\0')
		i++;
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		x = s[k];
		s[k] = s[j];
		s[j] = x;
	}
}
