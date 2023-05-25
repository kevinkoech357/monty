#include "monty.h"

/**
* main - entry point of the program
*
* @argc: number of command line args
*
* @argv: command character array
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
	const char *test_file;
	
	/* checks command line args used during execution */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	test_file = argv[1];
	return (0);
}
