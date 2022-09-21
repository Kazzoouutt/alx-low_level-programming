#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*Positive anything is better than negative nothing*/

/**
 * main - Find out if a number stored in the variable is positive or negative
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand(c) - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is zero\n");
	else
		printf("%d is negative\n");
	return (0);
}
