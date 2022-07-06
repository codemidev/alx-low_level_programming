#include "main.h"

/**
 * print_alphabet - Prints 10 tines alphabets in lower letters
 * Description: displays 10 times alphabets in lower cap wite _putchar
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		_putchar((lw * 10));
	}
	_putchar('\n');
}
