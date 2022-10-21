#include "main.h"

/**
 * print_last_digit - selects the last digit of an integer
 * @n: int type
 * Return: the absolute value of last digit
**/

int print_last_digit(int q)

{
	int p;

	if (q >= 0)
		p = q % 10;
	else
		p = (q % 10) * -1;
	_putchar(p + '0');
	return (p);
}
