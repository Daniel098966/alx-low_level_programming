#include "main.h"
/**
 * _islower - check if the character lowercase
 * @c: is a character argument
 * Return: return 1 and 0 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
