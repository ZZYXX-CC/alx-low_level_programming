#include "main.h"

/**
 * _islower - Check if character is lowercase.
 * @c The: character to be checked
 * Return: 1 is lowercase and 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
