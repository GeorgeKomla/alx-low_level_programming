#include <stdio.h>

/**
 * main - program to display 0-9 comma separated
 * Description: Print all possible combinations of two digits.
 * Return: 0 means success
**/
int main(void)

{
	int d, e, f;

	d = 0;

	while (d < 100)
	{
		e = d % 10; /* singles digit */
		f = d / 10; /* doubles digit */
		
		if (f < e)
		{
			putchar(f + '0');
			putchar(e + '0');
			
			if (d < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		d++;
	}
	putchar('\n');
	return (0);
}
