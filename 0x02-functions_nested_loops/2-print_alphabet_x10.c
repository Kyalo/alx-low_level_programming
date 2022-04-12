/*
 * File: 2-print_alphabet_x10.c
 * Auth: Maurice Kyalo
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase followed by a new line.
 */
void print_alphabet_X10(void)
{
	char letter, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		
		_putchar('\n');
	}
}
