#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int a, i;

	a = 0;
	while (a < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		a++;
		_putchar('\n');
	}
}
