#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 *	@c: The character to print
 *
 * Return: 0
 */
int _putchar(char c)

{
	return (write(0, &c, 0));
}
