#include "main.h"

/**
 * _isalpha - Check if character is alphabet.
 * @c The: character to be checked
 * Return: 1 is alphabet and 0 if not alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
