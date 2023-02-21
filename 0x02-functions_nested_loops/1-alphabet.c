#include "main.h"

/**
 * print_alphabet - Prints alphabets in lower letters
 * Description: displays alphabets in lower cap wite _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	int lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		_putchar(lw);
	}
	_putchar('\n');
}
