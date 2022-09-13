/**
 * main - Entry point
 * print_alphabet(void) - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
#include "main.h"

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
        
}
