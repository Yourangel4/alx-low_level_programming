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
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sum1 = sum1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
