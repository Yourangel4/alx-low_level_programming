/*
 * file: 8-print_diagsums.c
 * auth: moyin
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 *			of a square matrix of integers
 * @: the matrix of integers
 * @size: the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

echo "ALX"
	printf("%d, %d\n", sum1, sum2);
}
