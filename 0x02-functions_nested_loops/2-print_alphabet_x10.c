#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char j, x;

	for (x = 0; x <= 9; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
