#include "monty.h"

/**
 * _div - function that divides the second top element of the stack by,
 * the top element of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Usage: div .
 * If the stack contains less than two elements, print the error message,
 * L<line_number>: can't div, stack too short, followed by a new line,
 * and exit with the status EXIT_FAILURE .
 * The result is stored in the second top element of the stack, so that,
 * at the end: The top element of the stack contains the result and the,
 * stack is one element shorter.
 * If the top element of the stack is 0, print the error message,
 * L<line_number>: division by zero, followed by a new line, and exit,
 * with the status EXIT_FAILURE.
 *
 * Return: No return.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int temp_variable;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp_variable = (*stack)->n;
	if (temp_variable == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	_pop(stack, line_number);
	(*stack)->n /= temp_variable;
}
