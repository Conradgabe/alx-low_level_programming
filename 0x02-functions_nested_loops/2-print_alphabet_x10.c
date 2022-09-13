#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: prints the alphabet multiple times
 * Return: int
 */
void print_alphabet(void)
{

	int new_line = 0;

	while (new_line < 10)
	{
		int alphabet = 'a';

		while (alphabet < 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar("\n");

	}
}
