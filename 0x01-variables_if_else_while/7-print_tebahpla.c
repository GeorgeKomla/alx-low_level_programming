#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
**/

int main(void)

{
	char sammy;

	for (sammy = 'z'; sammy >= 'a'; sammy--)
		putchar(sammy);
	putchar('\n');
	return (0);
}
