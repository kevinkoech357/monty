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

/**
* pop - removes the last added element in stack_t
*
* @stack: pointer to pointer to stack_t
*
* @line_number: line number with the pop command
*
* Return: void
*
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tempo;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tempo = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(tempo);
}

/**
* swap - swaps the 2 elements at the top of stack_t
*
* @stack: pointer to pointer to stack_t
*
* @line_number: line number with swap command
*
* Return: void
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = *stack;
	*stack = (*stack)->next;
	top->next = (*stack)->next;
	(*stack)->next = top;
	(*stack)->prev = NULL;
	top->prev = *stack;
}

/**
* nop - voids all
*
* @stack: pointer to pointer to stack_t
*
* @line_number: line number with nop command
*
* Return: void
*/

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
