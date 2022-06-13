#include "main.h"

/**
 * _puts - prints a string and a newline
 * @str:input
 * Return:void
 */

void _puts(char *str)

{

	int i = 0;

	while (*str != '\0')

	{

		_putchar(*str);
		i++;

	}

	_putchar('\n');

}
