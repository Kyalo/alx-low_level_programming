/*
 * File: 5-sign.c
 * Auth: Maurice Kyalo
 */

#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number being checked.
 *
 * Return: 1 and print '+' if n is greater than zero, 0 and print '0' if n is zero, -1 and print '-' if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
