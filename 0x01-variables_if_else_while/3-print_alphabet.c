/*
*File: 3-print_alphabets.c
*Auth: Samuel Oladipo
*/

#include<stdio.h>

/**
 * main - main function
 * Description: Prints lower and uppercase alphabets
 * Return: Always 0
*/
int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
