#include <stdio.h>

/**
 * main - Prints lower and uppercase alphabets
 * Return : Always 0 (Success)
 */
int main(void)
{
	int ch, CH;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
