#include "monty.h"

/**
 * get_po - function that checks op against valid opcodes.
 * @op: pointer to op to check.
 * @stack: double pointer to the beginnig of the stack.
 * @line_number: script line number.
 *
 * Return: No return.
 */
void get_po(stack_t **stack, char *op, unsigned int line_number)
{
	int i;
	/* an array of valid opcodes */
	instruction_t valid_ops[] = {
		{"push", push}, {"pall", pall},
		{NULL, NULL}
	};

	for (i = 0; valid_ops[i].opcode; i++)
	{
		/* compare the two null-terminated bytes strings */
		if (strcmp(op, valid_ops[i].opcode) == 0)
		{
			valid_ops[i].f(stack, line_number);
			return;
		}
	}	
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
