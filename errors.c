#include "monty.h"

/**
* instruct_error - throws an error when an unknown instruction
* is used
*
* @instruction: unknown instruction
*
* @line: line number with unknown instruction
*
* Return: void
*/

void instruct_error(char *instruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, instruction);
	exit(EXIT_FAILURE);
}

