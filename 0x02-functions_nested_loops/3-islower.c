#include "main.h"
/**
 * _islower - Return 1 if alphabet is lowercase, 0 if it isn't.
 * @c: char type letter
 * Return: 1 if letter is lower case, and 0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
