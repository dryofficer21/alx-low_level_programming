#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t write_result = write(fd, text_content, strlen(text_content));

		if (write_result == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
