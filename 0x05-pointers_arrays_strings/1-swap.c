#include "main.h"

/**
 * swap_int - main entry
 * @a: A pointer
 * @b: A pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
