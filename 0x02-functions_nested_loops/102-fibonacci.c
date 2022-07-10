#include <stdio.h>
/**
  * main - Printing first 50 Fibonacci numbers                    *
  *
  * Return: 0
  */
int main(void)
{
	long int u, v, w, next;

	v = 1;
	w = 2;
	for (u = 1; u <= 50; ++u)
	{
		if (v != 20365011074)
		{
			printf("%ld, ", v);
		}
		else
		{
			printf("%ld\n", v);
		}
		next = v + w;
		v = w;
		w = next;
	}
	return (0);
}
