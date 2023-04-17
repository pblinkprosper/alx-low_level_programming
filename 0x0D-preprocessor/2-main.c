#include <stdio.h>
#define STRINGIFY(x) #x
#define FILE_NAME STRINGIFY(__FILE__)
/**
 * main - entry point
 *
 * Return: returns nothing
 */
int main(void)
{
	printf("%s\n" __FILE__);
	return (0);
}
