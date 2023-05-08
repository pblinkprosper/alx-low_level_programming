#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the name of the file
 * @text_content: string to write the file in
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, len;
	int input;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	len = 0;
	while (text_content[len])
		len++;
	input = write(file, text_content, len);

	if (input == -1)
		return (-1);
	close(file);
	return (1);
}
