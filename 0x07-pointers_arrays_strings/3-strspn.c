#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: character to print
 * @accept: character
 * Return: i.
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				break;
			counter++;
			accept++;
			s++;
		}
		if (*accept == '\0')
			break;
	}
	return (counter + 1);
}
