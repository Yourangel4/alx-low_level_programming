#include "main.h"

/**
 * print_alphabet_x_10 - prints alphabet 10 times in lowercase
 *
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
