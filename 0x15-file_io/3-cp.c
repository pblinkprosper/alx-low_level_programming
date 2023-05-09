#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 Always (success)
 */

int main(int argc, char **argv)
{
	int file, file2, check;
	char buff[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	file2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file2 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((check = read(file, buff, 1024)) > 0)
	{
		if (check == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		check = write(file2, buff, check);
		if (check == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (check == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(file) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100); }
	if (close(file2) == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100); }

	return (0);
}
