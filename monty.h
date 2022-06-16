#ifndef _MONTY_H_
#define _MONTY_H_
#define  _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>
#include <unistd.h>

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

/**
 * struct glob_s - globally useful variables, all rolled into one
 * @top: double pointer to top of stack
 * @ops: double pointer to an instruction struct
**/
typedef struct glob_s
{
	stack_t **top;
	instruction_t **ops;
} glob_t;

extern glob_t glob;

void get_po(stack_t **stack, char *op, unsigned int line_number);
void stack_init(stack_t **head);
int file_processor(char *filename, stack_t **stack);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int interpreter(char *num_string, unsigned int line_number);

#endif /* _MONTY_H_ */
