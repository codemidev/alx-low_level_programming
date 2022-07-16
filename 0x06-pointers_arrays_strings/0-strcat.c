#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int o = 0, p = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	while (src[p] != '\0')
	{
		dest[o] = srcl[p];
		p++;
		o++;
	}
	dest[o] = '\0';
	return (dest);
}
