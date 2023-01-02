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
	int index, sum1 =0, sum2 =0;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
