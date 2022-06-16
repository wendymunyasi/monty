#include "monty.h"

/**
 * _sub - function that subtracts the top element of the stack from the,
 * second top element of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Usage: add .
 * If the stack contains less than two elements, print the error message,
 * L<line_number>: can't sub, stack too short, followed by a new line,
 * and exit with the status EXIT_FAILURE .
 * The result is stored in the second top element of the stack, so that,
 * at the end: The top element of the stack contains the result and the,
 * stack is one element shorter.
 *
 * Return: No return.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int temp_variable;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_variable = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n -= temp_variable;
}
