/*
 * file: 1-memcpy.c
 * auth: moyin
 */

#include "main.h"

/**
 * _memcpy - fills memory with another buffedr
 * @dest: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
