#include "monty.h"

/**
* pint - prints the element at the top of stack_t
*
* @stack: pointer to pointer to stack_t
*
* @line_number: line number instruction appears
*
* Return: void
*
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

