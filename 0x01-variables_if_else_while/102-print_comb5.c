#include <stdio.h>

/**
 * main - main function
 * Description: Prints all possible combination of two digit numbers,
 *	ranging from 0 - 99, separated by a comma followed by a space.
 * Return: Always 0
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 98; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 99; dig2++)
		{
			putchar((dig1 / 10) + '0');
			putchar((dig1 % 10) + '0');
			putchar(' ');
			/* Dig */
			putchar((dig2 / 10) + '0');
			putchar((dig2 % 10) + '0');
			if (dig1 == 98 && dig2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
