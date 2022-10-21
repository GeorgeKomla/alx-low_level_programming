#include "main.h"

/**
 * print_alphabet - use only user defined variables to create output
 *
 * Description: Function to print "a to z" in lowercase using _putchar
 * Return: always a success
**/



void print_alphabet(void)

{
	char g = 'a';
	while (g <= 'z')
	{
		_putchar(g);
		g++;
	}
		_putchar('\n');
}
