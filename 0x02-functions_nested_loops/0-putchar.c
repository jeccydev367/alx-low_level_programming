#include "main.h"
/**
 * main - Entry point
 * _putchar - for printing characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
