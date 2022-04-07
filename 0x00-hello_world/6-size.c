/*
 * File: 6-size.c
 * Auth: Maurice Kyalo
 */

#include <stdio.h>

/**
 * main - Prints "prints the size of various types on the computer
 * 		it is compiled and run on. 
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %ld bytes\n", sizeof(char));
	printf("Size of a int: %ld bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float: %ld bytes\n", sizeof(float));
	
	return (0);
}
