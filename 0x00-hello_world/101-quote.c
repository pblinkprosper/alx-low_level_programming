/* This code prints with an error */
#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: Code as alternative to printf
 *
 * Return: If return 1 (Error)
 */
int main(void)
{
	/*
	 * write - is a function that points to the screen using system call
	 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
