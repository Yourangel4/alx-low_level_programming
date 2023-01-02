/*
 * file: 1-memcpy.c
 * auth: moyin
 */

#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 *		to by @src into that pointed to by @dest
 * @dest: a pointer to the memory area to copy @src into
 * @src: the source buffer to copy characters from
 * @n: the number of bytes to copy from @src
 *
 * Return: a pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; n > 0; index++, n--)
	{
		destination[index] = source[index];
	}

	return (dest);
}
