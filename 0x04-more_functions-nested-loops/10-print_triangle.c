#include "main.h"
/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int tag, index;

	if (size > 0)
	{
		for (tag = 1; tag <= size; tag++)
		{
			for (index = size - tag; index > 0; index--)
				_putchar(' ');
			for (index = 0; index < tag; index++)
				_putchar('#');
			if (tag == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
