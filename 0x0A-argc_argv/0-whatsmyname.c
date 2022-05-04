/*
 * File: 0-whatsmyname.c
 * Auth: Maurice Kyalo
 */

#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * @argc: the number of arguments to the program
 * @argv: an arrya of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int  __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
