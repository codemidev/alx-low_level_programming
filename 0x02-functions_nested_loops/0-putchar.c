#include "main.h"

/**
 * main - Prints to stdout
 * Return: 0
 * Description: Prints _putchar to stdout
 */
int main(void)
{
	char *cu = "_putchar";

	while (*cu)
	{
	_putchar(*cu);
	cu++;
	}
	_putchar('\n');
	return (0);
}
