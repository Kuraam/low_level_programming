#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;

	forre (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
