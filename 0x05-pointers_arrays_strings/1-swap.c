#include "main.h"

#include <stdio.h>

/**
 * swap_int - check the code
 * @a: - param 1
 * @b: - param 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
