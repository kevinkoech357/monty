#include "monty.h"

/**
* push - pushes new elements into stack_t
*
* @stack: pointer to pointer to stack
*
* @value: new data to be added to stack_t
*
* @line_number: line number where the instruction appears
*
* Return: void
*
*/

void push(stack_t **stack, int value, size_t line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

/**
* pall - prints all elements in stack_t
*
* @stack: pointer to pointer to stack
*
* Return: void
*
*/

void pall(stack_t **stack)
{
	stack_t *current;

	current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

}
