/*
 * File: 2-print_alphabet_x10.c
 * Auth: Maurice Kyalo
 */

#include "main.h"

/**
 * _islower - checks for a lowercase character:
 * 		Returns 1 if arggument is lowercase
 * 		Returns 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}	
