#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Author: GeorgeKomla
 * Date: 19-10-2022
 * Details: c program to print po+ve, 0 and ne-ive results of a random num
 * Return: 0 (success)
**/

int main(void)

{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
