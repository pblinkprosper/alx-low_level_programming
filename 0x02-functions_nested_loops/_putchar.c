#include <unistd.h> 
/**
 * _putchar - write the character a to stout
 * @a: The character to print
 *
 * Return: Always 0 success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
