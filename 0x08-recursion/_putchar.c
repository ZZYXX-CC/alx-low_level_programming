#include <unistd.h>

/**
 * _putchar - writes the character s to stdout
 * @s: The chracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatly.
 */
int _putchar(char s)

{
	return (write(1, &s, 1));
}
