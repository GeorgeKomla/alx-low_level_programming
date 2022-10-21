#include "main.h"

/**
 * print_alphabet_x10 - print list of alphabets 10 times
 * Return: 0
**/

void print_alphabet_x10(void)

{
	char f;
	int g = 0;

	while (g < 10)
	{
		f = 'a';
		while (f <= 'z')
		{
			_putchar(f);
			f++;
		}
		_putchar('\n');
		g++;
	}
}
