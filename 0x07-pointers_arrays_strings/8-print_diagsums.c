#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal values in a square array
 * @a: array of values
 * @size: size of array
 * Description: prints sum of both diagonals
 * Return: nothing
 **/

void print_diagsums(int *a, int size)
{
	int sum1, sum2, x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}

	printf("%d, %d\n", sum1, sum2);
}
