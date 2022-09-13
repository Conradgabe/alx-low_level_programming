#include <stdio.h>

/**
 * print_alphabet - the entry point
 *
 * Description: prints the alphabet in lowercase
 * Return: int
 */
void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet < 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar("\n");
}
