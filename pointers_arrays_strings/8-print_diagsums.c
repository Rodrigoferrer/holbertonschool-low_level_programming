#include <stdio.h>

/**
 * sum_diagonals - Recursively calculates the sums of the diagonals.
 * @matrix: Pointer to the matrix.
 * @s: Size of the matrix.
 * @idx: Current index for recursion.
 * @sum1: Pointer to the sum of the primary diagonal.
 * @sum2: Pointer to the sum of the secondary diagonal.
 *
 * This function updates sum1 and sum2 with the sums of the diagonals.
 */

void sum_diagonals(int *matrix, int s, int idx, int *sum1, int *sum2)
{
	if (idx >= s)
		return;

	*sum1 += *(matrix + idx * s + idx);
	*sum2 += *(matrix + idx * s + (s - 1 - idx));

	sum_diagonals(matrix, s, idx + 1, sum1, sum2);
}

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the square matrix (number of rows/columns).
 *
 * This function calculates the sums of the two diagonals of a square matrix
 * and prints them.
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int index;

	sum1 = 0;
	sum2 = 0;
	index = 0;

	sum_diagonals(a, size, index, &sum1, &sum2);
	printf("%d, %d\n", sum1, sum2);
}
