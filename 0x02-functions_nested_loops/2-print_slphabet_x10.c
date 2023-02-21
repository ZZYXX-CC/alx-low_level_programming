#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 tines alphabets in lower letters
 * Description: displays 10 times alphabets in lower cap wite _putchar
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char lw;
	int k = 0;

	while (k++ <= 9)
	{
	for (lw = 'a'; lw <= 'z'; lw++)
	{
		_putchar(lw);
	}
	_putchar('\n');
	}
}
