#include "monty.h"

/**
* interpret - interprets the lines in the test file to be used
* by the monty program during execution
*
* @stack: pointer to pointer to stack
*
* @line: line being read
*
* @line_number: line number of instructions
*
* Return: void
*
*/

void interpret(stack_t **stack, char *line, unsigned int line_number)
{
	char *args, *opcode;
	int element;

	opcode = strtok(line, " \t\n");

	if (strcmp(opcode, "push") == 0)
	{
		args = strtok(NULL, " \t\n");
		if (args == NULL)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		element = atoi(args);
		push(stack, element, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint(stack, line_number);
	}
	else
	{
		instruct_error(opcode, line_number);
	}
}

