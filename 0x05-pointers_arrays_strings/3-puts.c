#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = o;

	while (str[i])
	{
		_purchar(str[i]);
		i++;
	}
	_purchar('\0');
}
