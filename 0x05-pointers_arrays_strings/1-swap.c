#include "main.h"
#include <stdio.h>

/**
 * swap_int - updates the value of parameter to 98
 * @a: The value
 * @b: The value
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
