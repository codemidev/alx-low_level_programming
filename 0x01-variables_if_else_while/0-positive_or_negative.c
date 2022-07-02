/*
 * File : 0-positive_or_negative.c
 * Auth: Julius Ochai
 */

#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Prints random numbers thier corresponding operator state type
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n <  0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
}
