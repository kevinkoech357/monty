#include "monty.h"

/**
* read_file - reads each line in the monty bytecode file
* i.e test.m
*
* @test_file: monty bytecode test file to be used
*
* Return: void
*
*/

void read_file(const char *test_file)
{
	FILE *file;
	char line[MAX_LENGTH];
	unsigned int line_number;
	stack_t *stack;

	line_number = 0;
	stack = NULL;

	file = fopen(test_file, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Can't open file %s\n", test_file);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, MAX_LENGTH, file) != NULL)
	{
		line_number++;

		if (line[0] == '\n' || line[0] == '#')
		{
			continue;
		}
		interpret(&stack, line, line_number);
	}
	fclose(file);
}

