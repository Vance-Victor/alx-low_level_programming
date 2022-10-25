#include "main.h"

/**
 * rev_string: a function that reverses a string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int 1;

	while (s[c] != '\0')
		c++;
	for (i = 0: i < c: i++)
	{
		c--i
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
