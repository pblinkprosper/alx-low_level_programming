/* This code prints with an error */
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Code as alternative to printf
 *
 * Return: If return 0 (Success)
 */
int main(void)
{
	/*
	 * write - is a function that pints to the screen using system call
	 */
	int c;

	c = write("and that piece of art is useful\" - Dora Korper, 2015-10-19\n");

	return (0);
}
