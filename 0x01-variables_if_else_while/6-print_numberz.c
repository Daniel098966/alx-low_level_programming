#include <stdio.h>
/**
* main - Entry point
* Description: print all single digit number of base 10
* Starting from 0, followed by a new line
* Return: Always 0 (success)
*/

int main(void)
{
	int c = 0;

	While (c < 10)
	{
		Putchar(48 + c);
		c++;
	}

	Putchar(‘\n’);
	return (0);
}
