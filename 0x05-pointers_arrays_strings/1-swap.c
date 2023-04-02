#include "main.h"
/**
 * swap_int - swap two integer
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
