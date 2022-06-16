#include "monty.h"

/**
 * _pint - function that prints the value at the top of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Usage: pint .
 * If the stack is empty, print the error message,
 * L<line_number>: can't pint, stack empty, followed by a new line,
 * and exit with the status EXIT_FAILURE.
 *
 * Return: No return.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
