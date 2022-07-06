#include "main.h"

/**
 * main - prints lower case
 * Return: 0
 */
int main(void)
{
	int r;
	
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
