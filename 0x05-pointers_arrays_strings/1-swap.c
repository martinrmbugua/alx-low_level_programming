#include "main.h"

/**
 * swap_iint -swaps two integers' vslues
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
*/

void swap_int(int *a, Int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

