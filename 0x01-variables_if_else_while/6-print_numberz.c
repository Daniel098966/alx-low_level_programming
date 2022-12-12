#include <stdio.h>
/*
*main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	int c;

	c = 0;
	While (c < 10)
	{
		Putchar(c + ‘0');
		c++;
	}
	Putchar(‘\n’);
	return (0);
}
