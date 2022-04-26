/*
 * File: 0-memset.c
 * Auth: Maurice Kyalo
 */

#include "main.h"

/**
 * memset- Fills the first n bytes of the memory area pointed to 
 * 	by @s wiht the constant byte @c.
 * @s: Pointer to the memory to be filled.
 * @c: Character to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
