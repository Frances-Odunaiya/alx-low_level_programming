#include "main.h"

/**
 * _print_rev_recursion - main - check the code
 * @s: character of a string
 * rEturn: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*S != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}