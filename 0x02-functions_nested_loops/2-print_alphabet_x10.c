#include "main.h"

/**
 * print_alphabet_x_10 - prints alpha 10 times
 *
 * description: 'prints 10 times the alphabet, in lowercase'
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
