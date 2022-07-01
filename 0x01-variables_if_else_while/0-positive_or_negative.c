#include<stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n = rand();
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
}
