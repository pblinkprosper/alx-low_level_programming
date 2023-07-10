#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;
	int input;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len]; len++)
		;
	input = write(file, text_content, len);

	if (file == -1)
		return (-1);
	close(input);
	return (1);
}
