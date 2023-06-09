#ifndef MONTY_H
#define MONTY_H

/* C libraries required */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Global variables */
#define MAX_LENGTH 256

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Function prototypes */
void push(stack_t **stack, int value, unsigned int line_number);
void pall(stack_t **stack);
void read_file(const char *test_file);
void interpret(stack_t **stack, char *line, unsigned int line_number);
void instruct_error(char *instruction, unsigned int line);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
int check_int(const char *string);
int _isdigit(int c);

#endif /* MONTY_H */

