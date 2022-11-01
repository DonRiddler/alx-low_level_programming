#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, sums, sizes;

	i = 0;
	sums = 0;
	sizes = size * size;
	while (i < sizes)
	{
		if (i % (size + 1) == 0)
			sums += a[i];
		i++;
	}
	printf("%d, ", sums);

	sums = 0;
	i = 0;
	while (i < sizes)
	{
		if (i % (size - 1) == 0 && i != (sizes - 1) && i != 0)
			sums += a[i];
		i++;
	}
	printf("%d\n", sums);
}
