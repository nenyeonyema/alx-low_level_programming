#include "main.h"

/**
 * read_textfile -  a function that reads a text file 
 * and prints it to the POSIX standard output
 * @filename: a pointer to a string
 * @letters: number of letters to read and print
 * Return: the actaul number of letters it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr = NULL;
	char str[BUFFER_SIZE];
	ssize_t num_letters = 0;

	fptr = fopen(filename, "r");

	if (fptr == NULL)
		return (0);

	while (!feof(fptr))
	{
		fgets(str, letters, fptr);
		printf("%s", str);
		num_letters++;
	}

	fclose(fptr);

	return (num_letters);
}
