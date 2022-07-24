#include "main.h"

/**
 * _memset - fills memory with a constant byte .
 * @s: allocated memory - array of characters .
 * @b: char bytes .
 * @n: number of spaces to fill .
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
